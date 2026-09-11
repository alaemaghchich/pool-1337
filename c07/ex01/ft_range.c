/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 20:48:05 by amaghchi          #+#    #+#             */
/*   Updated: 2026/09/01 21:01:00 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	count;
	int	*range;

	if (min >= max)
	{
		return (NULL);
	}
	count = max - min;
	range = malloc(sizeof(int) * count);
	if (!range)
	{
		return (NULL);
	}
	i = 0;
	while (i < count)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
#include <stdio.h>
int main ()
{
    int *range = ft_range(3, 10);
    int i = 0;
    int count = 10 - 3;
    while (i < count)
    {
        printf("%d " , range[i++]);
    }    
}