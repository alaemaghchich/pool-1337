/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 13:50:47 by amaghchi          #+#    #+#             */
/*   Updated: 2026/09/01 20:57:32 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	len = ft_strlen(src) + 1;
	dup = malloc(sizeof(char) * len);
	if (!dup)
	{
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
#include <stdio.h>
int main ()
{
	char *str = "salam 3alykom";
	char *dup = ft_strdup(str);
	printf("%s", dup);
}