#include <stdio.h>

int base_len(char *base)
{
    int i = 0;
    while (base[i])
    {
        i++;
    }
    return (i);
}

int wax_twice(char *base)
{
    int i;
    int j;

    i = 0;
    while(base[i])
    {
        j = i + 1;
        while (base[j])
        {
            if(base[i] == base[j])
            {
                return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}

int wax_valid(char *base)
{
    int i;
    int len;

    len = base_len(base);
    if(len < 2)
    {
        return (0);
    }
    i = 0;
    while(base[i])
    {
        if (base[i] == '-' || base[i] == '+' ||  base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int get_index(char c, char *base)
{
    int i = 0;
    while(base[i])
    {
        if(base[i] == c)
        {
            return (i);
        }
        i++;
    }
    return (-1);
}

int ft_atoi_base(char *str, char *base)
{
    int i;
    int sign;
    int res;
    int len;

    if(!wax_valid(base) || !wax_twice((base)))
    {
        return (0);
    }
    i = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    sign = 1;
    while(str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    res = 0;
    len = base_len(base);
    int get = get_index(str[i], base);
    while(get != -1)
    {
        res = (res * len) + get;
        i++;
        get = get_index(str[i], base);
    }
    return (res * sign);
}
#include<stdio.h>
int main ()
{
printf("%d\n" , ft_atoi_base("01010110001", "01"));
}