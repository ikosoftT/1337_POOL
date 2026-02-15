/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:00:42 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/08/26 14:09:23 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_compare_str(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_swaper(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_print_out(char **str, int len)
{
	int	i;

	i = 1;
	while (i < len)
	{
		ft_putstr(str[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_compare_str(argv[i], argv[j]) > 0)
					ft_swaper(&argv[i], &argv[j]);
				j++;
			}
			i++;
		}
	}
	ft_print_out(argv, argc);
	return (0);
}
