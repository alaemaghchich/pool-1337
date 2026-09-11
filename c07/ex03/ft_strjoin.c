/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 16:15:41 by amaghchi          #+#    #+#             */
/*   Updated: 2026/09/02 09:01:31 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	total_lengths(int size, char **strs, char *sep)
{
	int	count;
	int	len;

	count = 0;
	len = 0;
	while (len < size)
	{
		count += ft_strlen(strs[len]);
		len++;
	}
	count += 1;
	count += ft_strlen(sep) * (size - 1);
	return (count);
}

char	*ftstrcpy(char *dest, char **src, int size, char *sep)
{
	int	i;
	int	j;
	int	x;

	x = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (src[i][j])
		{
			dest[x++] = src[i][j++];
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			dest[x++] = sep[j++];
		}
		i++;
	}
	dest[x] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		len;

	len = total_lengths(size, strs, sep);
	if (size == 0)
	{
		return (malloc(sizeof(char)));
	}
	join = malloc(sizeof(char) * len);
	if (!join)
	{
		return (NULL);
	}
	ftstrcpy(join, strs, size, sep);
	return (join);
}
#include <stdio.h>

int main()
{
	char *strs[] = {"salam", "3alykom" , "hello" , "world"};
	int size = 4;
	char *sep = "|||";
	char *join = ft_strjoin(size, strs, sep);
	printf("%s", join);
}