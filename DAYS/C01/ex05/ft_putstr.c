/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 23:40:33 by marvin            #+#    #+#             */
/*   Updated: 2025/09/08 23:40:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Made By Ikosoft 

void    ft_putstr(char *str)
{
    while (*str)
        write(1,str++,1);
}
/* int main (int argc, char **argv)
{
    ft_putstr(argv[1]);
} */