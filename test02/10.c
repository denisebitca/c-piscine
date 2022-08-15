/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 08:36:52 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/15 10:34:54 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex10/ft_strlcpy.c"
#include <bsd/string.h>

void test_strlcpy_real(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = strlcpy(buffer,string,size);

    printf("REAL STRLCPY: Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("FAKE STRLCPY: Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
    test_strlcpy_real(19);
    test_strlcpy_real(10);
    test_strlcpy_real(1);
    test_strlcpy_real(0);

    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
