/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:29:54 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/08/27 21:11:47 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_dup(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_invalid(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	if ((i < 2) || (ft_check_dup(base)))
		return (1);
	i = 0;
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13)
			|| (base[i] == 32)
			|| (base[i] == '+')
			|| (base[i] == '-'))
			return (1);
		i++;
	}
	return (0);
}

void	ft_convert2base(long nb, int base_len, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base_len)
	{
		ft_convert2base(nb / base_len, base_len, base);
	}
	ft_putchar(base[nb % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (ft_check_invalid(base))
		return ;
	while (base[i])
		i++;
	ft_convert2base(nbr, i, base);
}
