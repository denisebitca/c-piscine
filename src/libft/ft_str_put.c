/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aronez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:09:10 by aronez            #+#    #+#             */
/*   Updated: 2022/08/29 14:09:10 by aronez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "src/libft/libft.h"

ssize_t	ft_str_write(const char *str)
{
	ssize_t	write_status;

	write_status = write(1, str, ft_strlen(str));
	return (write_status);
}
