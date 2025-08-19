/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otkibou <otkibou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 19:28:14 by otkibou           #+#    #+#             */
/*   Updated: 2025/08/15 19:34:21 by otkibou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	sc;

	i = 0;
	sc = -1;
	while (sc != 0)
	{
		sc = 0;
		i = 0;
		while (i < size)
		{
			while (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				sc++;
			}
			i++;
		}
	}
}
