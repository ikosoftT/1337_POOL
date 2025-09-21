/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:12:06 by marvin            #+#    #+#             */
/*   Updated: 2025/09/21 11:12:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ikosoft Build & Re-Build 
// Easy : n * n if n*n == user_n retur (n) else return (0) or n++ while n <= u_n sqrtOf(n) O(n);
int     ft_sqrt(int nb)
{
    int     r;
    int     i;
    if (nb < 0)
        return (0);
    i = 1;
    while (i * i <= nb)
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}
/* #include "stdio.h"

int     main()
{
    printf("Squre Root of %d is %d \n", 25, ft_sqrt(25));
} */