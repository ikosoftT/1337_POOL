/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 21:18:09 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/08/28 17:07:48 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_check_base(char *base, int len)
{
	int	i;
	int	base_length;

	base_length = len;
	if ((base_length <= 1) || (base[0] == 0))
		return (1);
	i = 0;
	if (ft_check_dup(base))
		return (1);
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

int	ft_get_idx(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_convert2base(int b_len, char *base, char *str)
{
	int	decimal;
	int	i;
	int	index;

	decimal = 0;
	i = 0;
	while (str[i])
	{
		index = ft_get_idx(str[i], base);
		if (index == -1)
			break ;
		decimal = decimal * b_len + index;
		i++;
	}
	return (decimal);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sign;
	long	res;
	int		b_len;
	int		i;

	sign = 1;
	i = 0;
	while (base[i])
		i++;
	b_len = i;
	if (ft_check_base(base, b_len))
		return (0);
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	res = ft_convert2base(b_len, base, str + i);
	return (sign * res);
}
