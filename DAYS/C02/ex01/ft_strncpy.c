/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 00:18:15 by marvin            #+#    #+#             */
/*   Updated: 2025/09/09 00:18:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By Ikosoft

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
        int     i;

        i = 0;
        while (i < n)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
        while (i < n)
        {
            dest[i] = '\0';
            i++;
        }
        return (dest);
}