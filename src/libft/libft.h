/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aronez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:19:22 by aronez            #+#    #+#             */
/*   Updated: 2022/08/29 11:19:22 by aronez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int		ft_strlen(const char *str);

char	*ft_strncat(char *dest, const char *src, int n);

int		ft_str_dup(const char *src, char **dest);

ssize_t	ft_str_write(const char *str);

#endif //LIBFT_H