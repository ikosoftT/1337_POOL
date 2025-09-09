/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 00:09:55 by marvin            #+#    #+#             */
/*   Updated: 2025/09/09 00:09:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By Ikosoft | All Rights Reserved.
char    *ft_strcpy(char *dest, char *src)
{
    int     i;
    int     b;
    int     c;

    b = 0;
    c = 0;
    i = 0;
    while (src[i++])
        dest[b++] = src[c++];
    dest[i] = '\0';
    return (dest);
}
/* 
#include <stdio.h>

int main ()
{
    char t[100];
    char *s = "ccdsjfk3";
    ft_strcpy(t,s);
    printf("%s\n",t);
} */