/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 04:55:31 by marvin            #+#    #+#             */
/*   Updated: 2025/09/12 04:55:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Made By Ikosoft . :) Enjooy it dude

unsigned int    ft_strlen(char *s)
{
    unsigned int    i;

     i = 0;
     while (s[i])
        i++;
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
        unsigned int    d_len;
        unsigned int    s_len;
        unsigned int    i;

        d_len = ft_strlen(dest);
        s_len = ft_strlen(src);
        if (size <= d_len)
            return (size + s_len);
        i = 0;
        while (src[i] && (i + d_len) < (size - 1))
        {
            dest[d_len + i] = src[i];
            i++;
        }
        dest[d_len + i] = '\0';
        return (s_len  + d_len);
}