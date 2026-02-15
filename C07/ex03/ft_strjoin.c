/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 15:43:26 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/09/03 16:08:03 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_get_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_calculate_space(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
		total_len += ft_get_len(strs[i++]);
	total_len += ft_get_len(sep) * (size - 1);
	return (total_len);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		total;
	int		i;

	if (size == 0)
	{
		arr = malloc(1);
		arr[0] = '\0';
		return (arr);
	}
	total = ft_calculate_space(size, strs, sep);
	arr = malloc((total + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	arr[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}
