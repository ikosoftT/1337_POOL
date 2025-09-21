/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 10:42:20 by marvin            #+#    #+#             */
/*   Updated: 2025/09/21 10:42:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By Ikosoft.

int     ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    if (power == 0)
        return (1);
    return (nb * ft_recursive_power(nb, power-1));
}
/* #include <stdio.h>

int main()
{
    printf("res = %d\n", ft_recursive_power(16, 0)); // 1
} */