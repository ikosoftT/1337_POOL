/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:12:42 by marvin            #+#    #+#             */
/*   Updated: 2025/09/06 17:12:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1,&c,1);
}

void    ft_convert2Char(int nb)
{
    if (nb < 10)
    {
        ft_putchar(48);
        ft_putchar(nb + 48);
    }
    else
    {
        ft_putchar(nb / 10 + 48);
        ft_putchar(nb % 10 + 48);
    }
}

void    ft_print_comb2(void)
{
    int     a,b;
    a = 0;
    while (a < 99)
    {
        b = a + 1;
        while (b < 100)
        {
            ft_convert2Char(a);
            ft_putchar(32);
            ft_convert2Char(b);
            if (!(a == 98))
                write(1, ", ", 2);
            b++;
        }
        a++;
    }
}
