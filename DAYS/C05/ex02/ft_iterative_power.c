/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 09:46:45 by marvin            #+#    #+#             */
/*   Updated: 2025/09/21 09:46:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By Ikosoft

int     ft_iterative_power(int nb, int power)
{
    int     r;

    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    r = 1;
    while (power-- >= 1)
        r *= nb;
    return (r);
}
/* #include "stdio.h"
int     main(void)
{
    printf("res = %d\n", ft_iterative_power(2,3));
} */