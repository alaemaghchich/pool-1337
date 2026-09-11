/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 20:39:22 by amaghchi          #+#    #+#             */
/*   Updated: 2026/08/17 20:19:07 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		li_jay;
	char	*p;

	li_jay = 1;
	p = str;
	while (*p)
	{
		if (li_jay == 1 && (*p >= 'a' && *p <= 'z'))
			*p -= 32;
		else if (li_jay == 0 && (*p >= 'A' && *p <= 'Z'))
			*p += 32;
		if (*p < 48 || (*p > 57 && *p < 65) || (*p > 90 && *p < 97) || *p > 122)
			li_jay = 1;
		else
			li_jay = 0;
		p++;
	}
	return (str);
}
