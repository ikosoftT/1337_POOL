/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 01:02:03 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/08/15 20:18:46 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	t;

	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab [a] > tab[b])
			{
				t = tab[a];
				tab[a] = tab[b];
				tab[b] = t;
			}
			b++;
		}
		a++;
	}
}
