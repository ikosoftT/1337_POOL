/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 00:06:21 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/09/05 00:06:44 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_base(char *base);
char	*ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*p;

	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	p = malloc(34);
	num = ft_atoi_base(nbr, base_from);
	p = ft_putnbr_base(num, base_to);
	return (p);
}
