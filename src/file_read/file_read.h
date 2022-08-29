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

int	read_whole_file(int fd, const char *filename, char **file_contents);

#endif //FILE_READ_H
