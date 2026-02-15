/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:33:10 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/08/18 15:31:39 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dst_len;

	dst_len = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i])
	{
		dest[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dest[dst_len] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int 	main ()
{
	char dest[] = "Hey";
	char src[] = "all";
	ft_strncat(dest,src,100);
}
*/
