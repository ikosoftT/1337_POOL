/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 00:39:28 by marvin            #+#    #+#             */
/*   Updated: 2025/09/09 00:39:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By Ikosoft | Pragmatic Programmer

int     ft_alpha_numeric(char c)
{
    return (((c >= 'a' && c <= 'z')||
             (c >= 'A' && c <= 'Z')||
            (c >= '0' && c <= '9')));
}

int     ft_upper_case(char c)
{
    return ((c >= 'A' && c <= 'Z'));
}

int     ft_lower_case(char c)
{
    return ((c >= 'a' && c <= 'z'));
}

char    *ft_strcapitalize(char *str)
{
    int     flag;
    int     i;

    flag = 1; // Means "We are in the first word by diff"
    i = 0;
    while (str[i])
    {
        if (ft_alpha_numeric(str[i]))
        {
            if (ft_lower_case(str[i]) && flag)
                    str[i]-=32;
            else if (ft_upper_case(str[i]) && !flag)
                    str[i]+=32;
                flag = 0;
        }
        else
        {
            flag = 1;
        }
        i++;
    }
    return (str);
}
/* #include <stdio.h>
int main (void){
        char txt[] = "ikoSoft is 100%% student inch'allah";
        printf("%s\n",ft_strcapitalize(txt));
} */