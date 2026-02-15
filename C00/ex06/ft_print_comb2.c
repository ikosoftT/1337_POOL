/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:35:45 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/08/14 17:52:02 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert(int n)
{
	if (n < 0)
	{
		return ;
	}
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + 48);
	}
	else
	{
		ft_putchar((n / 10) + 48);
		ft_putchar((n % 10) + 48);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_convert(a);
			ft_putchar(' ');
			ft_convert(b);
			if (! (a == 98))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
