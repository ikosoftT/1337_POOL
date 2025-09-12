/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:22:43 by marvin            #+#    #+#             */
/*   Updated: 2025/09/09 15:22:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By Ikosoft

char    *ft_strstr(char *str, char *to_find)
{
    int     i;
    int     j;

    i = 0;
    while (str[i])
    {
              j = 0;
            while(str[i + j] == to_find[j])
                        j++;
                if (to_find[j] == '\0')
                    return (&str[i]);
            i++;
    }
}
/* #include <stdio.h>

int main ()
{
    char myStr[] = "hey cv kiday cv aba Hacker hh X MAN";
    printf("%s\n",ft_strstr(myStr,"cv aba"));
} */