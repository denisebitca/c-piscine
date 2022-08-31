/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aronez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:46:05 by aronez            #+#    #+#             */
/*   Updated: 2022/08/29 10:30:05 by aronez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#include "src/map.h"
#include "src/file_read/file_read.h"
#include "src/find_square/find_square.h"
#include "src/libft/libft.h"
#include "src/map_handling/map_handling.h"

int	solve_map(const char *input_map, char **output_map)
{
	t_map		map;
	t_coords	square_tl_corner;
	int			square_size;

	if (map_parser(input_map, &map) < 0)
		return (-1);
	if (find_largest_square(map, &square_tl_corner, &square_size) < 0)
		return (free(map.heat_map), -1);
	if (map_printer(map, square_tl_corner, square_size, output_map) < 0)
		return (free(map.heat_map), -1);
	return (free(map.heat_map), 0);
}

int	input_from_command_line(void)
{
	char	*standard_input;
	char	*solving_result;
	int		solving_status;

	if (read_whole_file(0, &standard_input) < 0)
		return (-1);
	solving_status = solve_map(standard_input, &solving_result);
	free(standard_input);
	if (solving_status < 0)
	{
		ft_str_write(2, "map error\n");
		return (solving_status);
	}
	if (ft_str_write(1, solving_result) < 0)
		solving_status = -1;
	return (free(solving_result), solving_status);
}

int	solve_map_from_file(const char *filename)
{
	int		fd;
	char	*file_contents;
	char	*solving_result;
	int		solving_status;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (-1);
	if (read_whole_file(fd, &file_contents) < 0)
		return (-1);
	solving_status = solve_map(file_contents, &solving_result);
	free(file_contents);
	if (close(fd) < 0)
		solving_status = -1;
	if (solving_status < 0)
	{
		ft_str_write(2, "map error\n");
		return (solving_status);
	}
	if (ft_str_write(1, solving_result) < 0)
		solving_status = -1;
	return (free(solving_result), solving_status);
}

int	input_from_files(const char **filenames)
{
	int		solving_status;

	solving_status = 0;
	if (solve_map_from_file(*filenames) < 0)
		solving_status = -1;
	filenames++;
	while (*filenames != NULL)
	{
		if (ft_str_write(1, "\n") < 0)
			solving_status = -1;
		if (solve_map_from_file(*filenames) < 0)
			solving_status = -1;
		filenames++;
	}
	return (solving_status);
}

int	main(int argc, char *argv[])
{
	int	status;

	if (argc <= 1)
		status = input_from_command_line();
	else
		status = input_from_files((const char **)(argv + 1));
	if (status < 0)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
