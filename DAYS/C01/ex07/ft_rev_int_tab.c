/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 23:46:40 by marvin            #+#    #+#             */
/*   Updated: 2025/09/08 23:46:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size)
{
    int     a;
    int     b;
    int     t;

    a = 0;
    b = size - 1;
    while (a < size / 2)
    {
        t = tab[a];
        tab[a] = tab[b];
        tab[b] = t;
        a++;
        b--;
    }
}

#include <stdio.h>

int     main ()
{
    int arr[] = {1,2,3};
    ft_rev_int_tab(arr,3);
    for (int i = 0; i < 3; i++)
        printf("%d ",arr[i]);// 3 2 1
}