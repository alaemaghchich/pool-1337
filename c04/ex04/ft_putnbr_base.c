/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 19:24:30 by amaghchi          #+#    #+#             */
/*   Updated: 2026/09/02 20:35:19 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	wax_twice(char *base)
{
	int	len;
	int	j;
	int	i;

	len = base_len(base);
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	wax_valid(char *base)
{
	int	i;
	int	len;

	len = base_len(base);
	if (len < 2 || (wax_twice(base) == 0))
	{
		return (0);
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	len = base_len(base);
	nb = nbr;
	if (wax_valid(base) == 0)
	{
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= len)
	{
		ft_putnbr_base(nb / len, base);
	}
	write(1, &base[nb % len], 1);
}
