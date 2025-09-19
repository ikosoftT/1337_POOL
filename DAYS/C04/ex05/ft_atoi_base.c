/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:04:21 by marvin            #+#    #+#             */
/*   Updated: 2025/09/19 13:04:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By Love & Passion | Ikosoft

int     ft_get_len(char *s)
{
    int     i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int     ft_space(char c)
{
    return ((c >= 9 && c <= 13) || (c == 32));
}

int     ft_check_dup(char *base)
{
        int     i;
        int     j;

        i = 0;
        while (base[i])
        {
            j = i + 1;
            while (base[j])
            {
                if (base[i] == base[j])
                    return (-1);
                j++;
            }
            i++;
        }
        return (1);
}

int     ft_check_base(char *base)
{
    int     base_len;
    int     i;

    base_len = ft_get_len(base);
    if (base_len <= 1 || !(base[0]))
        return (1);
    if (ft_check_dup(base) == -1)
        return (1);
    i = 0;
    while (base[i])
    {
        if ((base[i] == '-' || base[i] == '+') || (ft_space(base[i])))
            return (1);
        i++;
    }
    return (0);
}

int     ft_get_base_val(char *base, char c)
{
    int     i;

    i = 0;
    while (base[i])
    {
        if (c == base[i])
            {
                return (i);
            }
        i++;
    }
    return (-1);
}

int     ft_atoi_base(char *str, char *base)
{
    int     b_len;
    int     s;
    int     r;
    int     v;
    int     i;

    b_len = ft_get_len(base);

    if (ft_check_base(base) == 1)
        return (0);
    s = 1;
    r = 0;
    i  = 0;
    while (ft_space(str[i]))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (base[i] == '-')
            s *= (-1);
        i++;
    }
    while(ft_get_base_val(base,str[i]) > -1 && str[i])
    {
            r = (r * b_len) + ft_get_base_val(base,str[i]);
            i++;
    }
    return (r * s);
}
/* #include <stdio.h>
int     main()
{
    printf("res = %d\n",ft_atoi_base("                     ---++---2A","0123456789")); // 2

} */
