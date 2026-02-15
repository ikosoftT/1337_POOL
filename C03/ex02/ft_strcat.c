/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 01:34:53 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/08/18 03:31:18 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcat(char	*dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main ()
{
	char s1[] = "hey";
	char s2[] = "hola";
	ft_strcat(s1,s2);
	printf("%s",s1);
}*/
