/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 05:33:47 by marvin            #+#    #+#             */
/*   Updated: 2025/09/12 05:33:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By Ikosoft. (Advanced_Tricks)

#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
        write (1,str++,1);
}

/* int main (int argc , char **argv)
{
    ft_putstr(argv[1]);
} */