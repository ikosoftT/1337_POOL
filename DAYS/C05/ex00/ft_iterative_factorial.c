/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 09:15:58 by marvin            #+#    #+#             */
/*   Updated: 2025/09/21 09:15:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Made By Ikosoft || rule = n * (n-1);

int     ft_iterative_factorial(int nb)
{
    int     r;
    int     i;

    r = 1;
    i = nb;
    while (i >= 1)
    {    
        r *= i;
        i--;
    }
    return (r);
}
/* #include "stdio.h"
int     main(void)
{
    printf("res = %d\n", ft_iterative_factorial(6));
    return (0);
} */