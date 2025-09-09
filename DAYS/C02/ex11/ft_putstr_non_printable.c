/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 01:07:41 by marvin            #+#    #+#             */
/*   Updated: 2025/09/09 01:07:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By IkoSoft | Please Just Understand it Not Copy Past it.

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_printin_hex(unsigned char c)
{
    char *hex_base = "0123456789abcdef";
    ft_putchar('\\');
    ft_putchar(hex_base[c / 16]);
    ft_putchar(hex_base[c % 16]);
}

void    ft_putstr_non_printable(char *str)
{
    unsigned int    i;
    unsigned char   c;

    i = 0;
    while (str[i])
    {
        c = str[i];
        if (c < 32 || c >= 127)
            ft_printin_hex(c);
        else
            ft_putchar(c);
        i++;
    }
}
/* int main (){
    ft_putstr_non_printable("\n\t");// \0a\09
} */