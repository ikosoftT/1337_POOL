/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 14:11:07 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/08/14 17:39:25 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(int n, int *arr)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (!(arr[0] == (10 - n)))
		write(1, ", ", 2);
}

void	ft_generate_combs(int n, int start, int index, int *arr)
{
	if (index == n)
	{
		ft_print_comb(n, arr);
		return ;
	}
	while (start <= 9)
	{
		arr[index] = start;
		ft_generate_combs(n, start + 1, index + 1, arr);
		start++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[9];

	if (n > 0 && n < 10)
		ft_generate_combs(n, 0, 0, tab);
}
