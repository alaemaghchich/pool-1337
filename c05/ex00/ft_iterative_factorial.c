/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 09:40:10 by amaghchi          #+#    #+#             */
/*   Updated: 2026/08/31 11:19:01 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	count;

	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	count = 1;
	while (nb >= i)
	{
		count *= i++;
	}
	return (count);
}
