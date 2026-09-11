/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 12:03:02 by amaghchi          #+#    #+#             */
/*   Updated: 2026/08/14 20:08:02 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	fi;
	int	li;
	int	tmp;

	fi = 0;
	li = size - 1;
	while (li > fi)
	{
		tmp = tab[fi];
		tab[fi] = tab[li];
		tab[li] = tmp;
		fi++;
		li--;
	}
}
