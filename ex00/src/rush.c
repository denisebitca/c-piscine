/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 07:37:24 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/28 08:55:22 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "libft.h"
#include <stdlib.h>

int	ft_line_parse(char *line, t_list **list)
{
	char 	**firstsplit;
	int		magnitude;
	char	*words;

	if (line[0] == '\0')
		return (1);
	firstsplit = ft_split(line, ":");
	if(ft_strslen(firstsplit) != 3)
	{
		free(firstsplit);
		return (0);
	}
	magnitude = ft_atoi(firstsplit[0]);
	words = ft_strdup(firstsplit[1]);
	free(firstsplit);
	if (words == NULL)
		return (0);
	if (ft_find_elem_parse(*list, magnitude))
	{
		free(words);
		return (0);
	}
	ft_push_elem_parse_last(magnitude, ft_truncate(words), list);
	return (1);
}

/*
	In order to fight against the everlasting issue that is memory allocation
	of a buffer, and because I know tutors are going to throw textfiles
	that weigh 1gb to the program, the idea here is to perhaps make an
	adaptable buffer.
*/

char *ft_realloc_buffer(char *ptr, int size)
{
	char 	*newptr;
	int		i;

	i = -1;
	newptr = malloc(sizeof(char) * size);
	if (newptr == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		free(newptr);
		return (NULL);
	}
	while (ptr[++i])
		ptr[i] = newptr[i];
	newptr[++i] = '\0';
	free(ptr);
	return (newptr);
}

int	rush_parser(char *filename, t_list **list)
{
	int		fd;
	int 	size;
	char 	*buffer;
	int		step;

	fd = open(filename, O_RDONLY);
	size = 2;

	if (fd == -1)
		return (NULL);
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (0);
	buffer[1] = '\0';
	step = read(fd, buffer, 1);
	while (step > 0)
	{
		if (buffer[size - 1] == '\n')
		{
			if (!ft_line_parse(buffer, list))
			{
				free(buffer);
				return (0);
			}
			free(buffer);
			size = 2;
			buffer = malloc(sizeof(char) * size);
			if (buffer == NULL)
				return (0);
			buffer[1] = '\0';
		}
		else
			buffer = ft_realloc_buffer(buffer, ++size);
		if (buffer == NULL)
			return (0);
		step = read(fd, buffer, 1);
	}
	free(buffer);
	if (step < 0)
		return (0);
	close(fd);
	return (1);
}
