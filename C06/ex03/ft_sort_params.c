/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 10:30:48 by amaghchi          #+#    #+#             */
/*   Updated: 2026/08/26 18:41:39 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s2[i] == s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_ptstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **s, char **s2)
{
	char	*tmp;

	tmp = *s;
	*s = *s2;
	*s2 = tmp;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac - 1)
	{
		j = 1;
		while (j < ac - i)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
				ft_swap(&av[j], &av[j + 1]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
		ft_ptstr(av[i++]);
}
