/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:02:51 by marvin            #+#    #+#             */
/*   Updated: 2025/09/21 11:02:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By Ikosoft | Let's "Goooo"

int     ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 0 || index == 1)
        return (index);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
#include "stdio.h"

int     main()
{
    printf("%d\n", ft_fibonacci(14));
}