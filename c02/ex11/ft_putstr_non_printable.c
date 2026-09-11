/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 11:12:41 by amaghchi          #+#    #+#             */
/*   Updated: 2026/08/17 20:19:44 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char str)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[str / 16]);
	ft_putchar(hex[str % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			ft_putchar(*str);
		}
		else
		{
			ft_print_hex(*str);
		}
		str++;
	}
}
