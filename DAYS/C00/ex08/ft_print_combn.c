/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 22:59:45 by marvin            #+#    #+#             */
/*   Updated: 2025/09/08 22:59:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======= All Rights Reserved | Built By Ikosoft ====== //

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1,&c,1);
}

void    ft_print_combs(int  user_n,int *num_arr)
{
    int     i;

     i = 0;
     while (i < user_n)
     {
        ft_putchar(num_arr[i] + 48);
        i++;
     }
     if (!(num_arr[0] == (10 - user_n)))
            write(1,", ",2);
}

void    ft_build_combs(int user_n, int value, int index, int *arr)
{
        // Base Case
        if (index == user_n)
        {
            ft_print_combs(user_n,arr);
            return ;
        }
        // General Case
        while (value <= 9)
        {
            arr[index] = value;
            ft_build_combs(user_n,value + 1,index + 1,arr);
            value++;
        }
}

void    ft_print_combn(int n)
{
    int     max_nums[10];
    // Start Only if n >  0 && < 10
    if (n > 0 && n < 10)
        ft_build_combs(n,0,0,max_nums);
}

// Unite Testing
int main (void)
{
    ft_print_combn(9);
    ft_putchar('\n');
    return (0);
}