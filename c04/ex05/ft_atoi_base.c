/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 19:24:30 by amaghchi          #+#    #+#             */
/*   Updated: 2026/09/02 20:35:19 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar(char c)
{
    write(1,&c,1);
}

int     ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

int     ft_is_twice(char *base)
{
    int i , j;
     i = 0;
     while(base[i])
     {
        j = i + 1;
        while(base[j])
        {
            if(base[i] == base[j])
            {
                return 1;
            }
            j++;
        }
        i++;
     }
     return 0;
}

int     ft_validation(char *base)
{
    int len = ft_strlen(base);
    int i = 0;

    if (ft_is_twice(base) == 1)
    {
        return -1;
    }

    if(base[0] == '\0' || len < 2)
    {
        return -1;
    }
    while(base[i]){
        if(base[i] == '+' || base[i] == '-')
        {
            return -1;
        }
        i++;
    }
    return 0;
}

int      ft_check_base_value(char c , char *base)
{
    int i = 0;
    while(base[i])
    {
        if(c == base[i])
        {
            return i;
        }
        i++;
    }
    return -1;
}

int     ft_atoi_base(char *str, char *base)
{
    if(ft_validation(base) == -1){
        return;
    }
    int result = 0;
    int sign = 1;
    int base_len = ft_strlen(base);

    while(*str == ' ' || (*str >= 9 && *str <= 13))
    {
        str++;
    }

    while(*str == '+' || *str == '-')
    {
        if(*str == '-'){
            sign *= -1;
        }
        str++;
    }

    while(*str){
        int value = ft_check_base_value(*str, base);
        result *= base_len;
        result += value;
        str++;
    }
    return sign * result;
}