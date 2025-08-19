/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otkibou <otkibou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:09:23 by otkibou           #+#    #+#             */
/*   Updated: 2025/08/12 21:16:27 by otkibou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	blackbox(int n)
{
	char	str[10];
	int		i;

	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (n > 0)
	{
		str[i] = n % 10 + (str[i] + '0');
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i < 10)
				write(1, "0", 1);
			blackbox(i);
			write(1, " ", 1);
			if (j < 10)
				write(1, "0", 1);
			blackbox(j);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
