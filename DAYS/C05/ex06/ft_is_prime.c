/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 14:19:31 by marvin            #+#    #+#             */
/*   Updated: 2025/09/21 14:19:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return (0);
    if (nb == 2)
        return (1);
    if (nb % 2 == 0)
        return (0);
    i = 3;
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i += 2;
    }
    return (1);
}

/* #include "stdio.h"
int main ()
{
    printf("res  = %d\n", ft_is_prime());
} */