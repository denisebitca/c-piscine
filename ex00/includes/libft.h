/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:57:30 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/28 16:52:52 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

char	**ft_split(char *str, char *charset);
long int	ft_atoi(char *nbr);
char	*ft_truncate(char *str);
char	*ft_strdup(char *str);
int		ft_strslen(char **strs);
void	ft_putstr(char *str);

#endif
