/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:57:25 by marvin            #+#    #+#             */
/*   Updated: 2025/09/22 16:57:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By Ikosoft.

#include <unistd.h>

void    ft_putstr(char *s)
{
    while (*s)
        write(1, s++, 1);
    write(1, "\n", 1);
}

int     main(int argc, char **argv)
{
    int     i;

    i = 1;
    while (i <= argc - 1)
        ft_putstr(argv[i++]);
    return (13);
}