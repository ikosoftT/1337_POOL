/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 11:45:36 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/08/26 14:07:20 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{	
	int	j;

	j = 0;
	if (argc > 1)
	{
		while (argc > 1)
		{
			j = 0;
			while (argv[argc - 1][j])
			{
				write(1, &argv[argc - 1][j], 1);
				j++;
			}
			write(1, "\n", 1);
			argc--;
		}
	}
	return (0);
}
