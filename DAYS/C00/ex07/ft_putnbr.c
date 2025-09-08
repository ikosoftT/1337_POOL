/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 09:08:34 by marvin            #+#    #+#             */
/*   Updated: 2025/09/08 09:08:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c,1);
}

void    ft_putnbr (int nb)
{
    long    num;
    num = nb;
    if (num < 0)
        {
        ft_putchar('-');
        num = -num;
        }
    if (num >= 10)
        ft_putnbr(num / 10);
    ft_putchar(num % 10 + 48);
}
