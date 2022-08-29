/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_read.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aronez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:15:48 by aronez            #+#    #+#             */
/*   Updated: 2022/08/29 11:15:48 by aronez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_READ_H
# define FILE_READ_H

# define BUF_SIZE 16384

int	read_whole_file(
		int fd,
		const char *filename,
		int (*reset_file)(int, const char *),
		char **file_contents
		);
int	reopen_file(int fd, const char *filename);
int	reopen_standard_input(int fd, const char *dummy_filename);

#endif //FILE_READ_H
