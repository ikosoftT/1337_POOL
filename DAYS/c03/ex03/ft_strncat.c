/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:11:37 by marvin            #+#    #+#             */
/*   Updated: 2025/09/09 15:11:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By IkoSoft

int     ft_strlen(char *s)
{
    int     i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int     i;
    int     d_len;

    d_len = ft_strlen(dest);
    i = 0;
    while (src[i] && i < nb)
    {
        dest[d_len + i] = src[i];
        i++;
    }
     dest[d_len + i] = '\0';
     return (dest);
}