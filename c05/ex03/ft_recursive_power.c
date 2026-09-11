int ft_recursive_power(int nb, int pow)
{
    if(pow < 0)
    {
        return (0);
    }
    if (pow == 0)
    {
        return (1);
    }
    return (nb * ft_recursive_power(nb , pow - 1));
}