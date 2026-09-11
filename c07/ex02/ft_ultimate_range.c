/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 21:24:11 by amaghchi          #+#    #+#             */
/*   Updated: 2026/09/01 21:47:45 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
	{
		return (-1);
	}
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
#include <stdio.h>

int main()
{
	int *range;
	int count = 10 - 3;
	ft_ultimate_range(&range, 3, 10);
	int i = 0;
	while(i < count)
	{
		printf("%d ", range[i++]);
	}
	
}