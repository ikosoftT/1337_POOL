/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 05:33:59 by marvin            #+#    #+#             */
/*   Updated: 2025/09/15 05:33:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By Love & Passion < IkoSoft. The Number 1 World Wide Pragmatic Programmer.

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_base_len(char *b)
{
    int     i;

    i = 0;
    while (b[i])
        i++;
    return (i);
}

int     ft_check_dup(char *base)
{
    int     i;
    int     j;
    
    i = 0;
    while (base[i])
    {
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
            {      
                return (1);
                break;
            }
            j++;
        }
        i++;
    }
}


// #### Main_Functions #####
int     ft_is_base_not_valid(char *base)
{
    int     i;
    int     b_len;
    
    b_len = ft_base_len(base);
    if (!(base[0]) || (b_len <= 1))
        return (1);
    if (ft_check_dup(base) == 1)
        return (1); 
    i = 0;
    while (base[i])
    {
        if (base[i] == '-' || base[i] == '+')
                 return (1);
        i++;
    }
}

void    ft_convert2base(char *base, int base_len, long nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= base_len)
        ft_convert2base(base, base_len, nb / base_len);
    ft_putchar(base[nb % base_len]);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int     b_len;
    
    if (ft_is_base_not_valid(base) == 1)
            return ;
    b_len = ft_base_len(base);
    ft_convert2base(base,b_len, (long)nbr);
}

#include <stdio.h>
int main(void)
{
    ft_putnbr_base(-42,"");
    ft_putchar('\n');
}
/* ************* End CODING ************ */



