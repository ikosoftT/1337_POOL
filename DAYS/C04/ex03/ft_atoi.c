/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 05:44:34 by marvin            #+#    #+#             */
/*   Updated: 2025/09/12 05:44:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By IkoSoft With Love Of course &  Passion "I love the Code I Love the Errors Cause No Bugs No Life"

int     is_space(char c)
{
    return ((c == 32) || (c >= 9 && c <= 13));
}

int     ft_atoi(char *str)
{
    int		handl;
    int		final_number;
    int		i;

    handl = 1;
    final_number = 0;
    i = 0;
    while (is_space(str[i]))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            handl *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {    
        final_number = (final_number * 10) + (str[i] - 48);
        i++;
    }
    return (final_number * handl);
}
/* #include <stdio.h>
// Unite Testing 
int main (int argc, char **argv){
    printf("\nresult = %d\n",ft_atoi(argv[1]));
} */
