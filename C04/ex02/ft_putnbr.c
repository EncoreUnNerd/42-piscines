/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:01:12 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/23 16:53:23 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		div;
	int		mod;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}	
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb < 10)
	{
		ft_putchar('0' + nb);
	}
	else
	{
		div = nb / 10;
		mod = nb % 10;
		ft_putnbr(div);
		ft_putchar('0' + mod);
	}
}
