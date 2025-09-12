/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:30:38 by marvin            #+#    #+#             */
/*   Updated: 2025/09/09 14:30:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By IkoSoft

char    *ft_strcat(char *dest, char *src)
{
    int     i;
    int     j;

    j = 0;
    while (dest[j])
        j++;
    i = 0;
    while (src[i])
    {
        dest[j + i] = src[i];
        i++;
    }
    dest[i + j] = '\0';
    return (dest);
}