/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:16:41 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/08/29 00:29:34 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	res = 1;
	i = nb;
	while (i > 1)
	{
		res *= i;
		i--;
	}
	return (res);
}
