/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:42:19 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/18 16:03:49 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != '7' || d != '8' || u != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '1';
	u = '1';
	while (c <= '7')
	{
		while (d <= '8')
		{
			while (u < '9')
			{
				++u;
				print_numbers(c, d, u);
			}
			++d;
			u = d;
		}
		++c;
		d = c + 1;
		u = d;
	}
}
