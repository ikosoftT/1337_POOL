/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 23:53:18 by marvin            #+#    #+#             */
/*   Updated: 2025/09/08 23:53:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made by ikosoft | Bubble Sort Algorithm.
void    ft_swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void    ft_sort_int_tab(int *tab, int size)
{
        int     i;
        int     j;

        i = 0;
        while (i < size)
        {
            j = i + 1;
            while (j < size)
            {
                if (tab[i] > tab[j])
                    ft_swap(&tab[i],&tab[j]);
                j++;
            }
            i++;
        }
}
