#include <stdio.h>

int ft_iterative_power(int nb , int pow)
{
    int tmp;

    tmp = nb;
    if (pow < 0)
    {
        return (0);
    }
    if (pow == 0)
    {
        return (1);
    }
    while (pow > 1)
    {
        nb *= tmp;
        pow--;
    }
    return (nb);
}