/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:01:12 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/19 09:27:22 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	else_show(int nb)
{
	int	i;
	int	mod;
	int	n;

	i = 10;
	while ((nb / i) > 10)
	{
		i = i * 10;
	}
	while (i >= 10)
	{
		mod = nb % i;
		n = (nb - mod) / i;
		ft_putchar('0' + n);
		i = i / 10;
		nb = mod;
	}
	ft_putchar('0' + nb);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb < 10)
		{
			ft_putchar('0' + nb);
		}
		else
		{
			else_show(nb);
		}
	}
}
