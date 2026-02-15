/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 03:24:01 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/08/19 05:11:23 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char	*dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
/*
#include <stdio.h>

int main ()
{
	char dest[] = "hello";
	char src[] = "yassine";
	printf("%d",ft_strlcat(dest,src,2));
}
*/
