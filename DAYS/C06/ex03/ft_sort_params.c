/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:04:10 by marvin            #+#    #+#             */
/*   Updated: 2025/09/22 17:04:10 by marvin           ###   ########.fr       */
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

void    ft_swap(char **s1, char **s2)
{
    char *tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}

int     ft_strcmp(char *s1, char *s2)
{
    int     i;
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int     main(int argc, char **argv)
{
    int     i;
    int     j;
    if (argc > 1)
    {
        // Sorting Process
        i = 1;
        while (i <= argc - 1)
        {
            j = i + 1;
            while (j <= argc - 1)
            {
                if (ft_strcmp(argv[i],argv[j]) > 0)
                    ft_swap(&argv[i], &argv[j]);
                j++;
            }
            i++;
        }
        // Output
        i = 1;
        while (i <= argc - 1)
            ft_putstr(argv[i++]);
    }
    return (0);
}