/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:28:42 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/08/16 23:07:24 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	int				i;

	i = 0;
	while (str[i])
	{
		c = (unsigned char)str[i];
		if (c < 32 || c >= 127)
			ft_print_hex(c);
		else
			ft_putchar(c);
		i++;
	}
}
