/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aronez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:21:41 by aronez            #+#    #+#             */
/*   Updated: 2022/08/27 17:21:41 by aronez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include <fcntl.h>
#include <unistd.h>

#include "src/file_read/file_read.h"

void	count_len(char buf[BUF_SIZE], ssize_t read_bytes, void *data);
void	cat_bytes(char buf[BUF_SIZE], ssize_t read_bytes, void *data);
int		apply_to_file(
			int fd,
			void (*handle_buf)(char[BUF_SIZE], ssize_t, void *),
			void *data
			);

int	reopen_simple_file(int fd, const char *filename)
{
	if (close(fd) < 0)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (-1);
	return (fd);
}

int	reopen_standard_input(int fd, const char *dummy_filename)
{
	(void)fd;
	(void)dummy_filename;
	return (0);
}

int	read_whole_file(
		int fd,
		const char *filename,
		int (*reset_file)(int, const char *),
		char **file_contents
		)
{
	ssize_t	len;
	int		i;

	len = 0;
	if (apply_to_file(fd, &count_len, &len) < 0)
		return (-1);
	fd = reset_file(fd, filename);
	if (fd < 0)
		return (-1);
	*file_contents = malloc(sizeof(char) * (len + 1));
	if (*file_contents == NULL)
		return (-1);
	i = -1;
	while (++i < len + 1)
		(*file_contents)[i] = '\0';
	if (apply_to_file(fd, &cat_bytes, *file_contents) < 0)
	{
		free(*file_contents);
		return (-1);
	}
	return (0);
}
