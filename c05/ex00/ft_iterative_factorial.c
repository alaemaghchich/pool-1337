#include <stdio.h>
int ftive_factorial(int nb)
{
    int i = 1;
    int count = 1;
    if (nb < 0)
    {
        return (0);
    }
    while (nb >= i)
    {
        count *= i++;
    }
    return (count);
}