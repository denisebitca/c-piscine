/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_exploration.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aronez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:01:06 by aronez            #+#    #+#             */
/*   Updated: 2022/08/29 12:01:06 by aronez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "src/file_read/file_read.h"
#include "src/libft/libft.h"

void	count_len(char buf[BUF_SIZE], ssize_t read_bytes, void *data)
{
	ssize_t	*len;

	(void)buf;
	len = (ssize_t *)data;
	*len += read_bytes;
}

void	cat_bytes(char buf[BUF_SIZE], ssize_t read_bytes, void *data)
{
	char	*file_contents;

	file_contents = (char *)data;
	ft_strncat(file_contents, buf, (int)read_bytes);
}

int	apply_to_file(
		int fd,
		void (*handle_buf)(char[BUF_SIZE], ssize_t, void *),
		void *data
)
{
	char	buf[BUF_SIZE];
	ssize_t	read_bytes;
	int		i;

	i = -1;
	while (++i < BUF_SIZE)
		buf[i] = '\0';
	read_bytes = read(fd, buf, BUF_SIZE);
	if (read_bytes < 0)
		return (-1);
	while (read_bytes != 0)
	{
		handle_buf(buf, read_bytes, data);
		read_bytes = read(fd, buf, BUF_SIZE);
		if (read_bytes < 0)
			return (-1);
	}
	return (0);
}
