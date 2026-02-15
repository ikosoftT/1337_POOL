/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:41:50 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/08/16 22:48:51 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_alpha_numeric(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

int	is_upper(char c)
{
	return ((c >= 'A' && c <= 'Z'));
}

int	is_lower(char c)
{
	return ((c >= 'a' && c <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int	flag;
	int	i;

	flag = 1;
	i = 0;
	while (str[i])
	{
		if (is_alpha_numeric(str[i]))
		{
			if (is_lower(str[i]) && flag)
			{
				str[i] -= 32;
			}
			else if (is_upper(str[i]) && !flag)
			{
				str[i] += 32;
			}
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}
