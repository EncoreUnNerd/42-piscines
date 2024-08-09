/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:02:35 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/24 11:38:20 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	check_validity(char *str)
{
	int	i;
	int	c;
	int	b;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126) || str[i] == '+' || str[i] == '-')
			return (1);
		c = 0;
		b = 0;
		while (str[b])
		{
			if (str[b] == str[i])
			{
				c++;
				if (c > 1)
					return (1);
			}
			b++;
		}
		i++;
	}
	return (0);
}

void	print_reverse(char *str, int i, int str_len)
{
	if (i >= str_len - 1)
		write(1, &str[i], 1);
	else
	{
		print_reverse(str, i + 1, str_len);
		write(1, &str[i], 1);
	}
}

void	convert(char *base, long nbr, char *res, int tries)
{
	int	div;
	int	mod;
	int	e;
	int	len_base;

	len_base = get_len(base);
	div = nbr / len_base;
	mod = nbr % len_base;
	if (div < len_base)
	{
		e = 1;
		if (div == 0)
			e = 0;
		res[tries + e + 1] = '\0';
		res[tries] = base[mod];
		if (e != 0)
			res[tries + e] = base[div];
	}
	else
	{
		convert(base, div, res, tries + 1);
		res[tries] = base[mod];
	}		
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	result[999];	
	int		len_res;
	long	new_nbr;
	int		i;

	i = 0;
	new_nbr = 0;
	if (get_len(base) <= 1 || check_validity(base) != 0)
		return ;
	while (i <= 999)
	{
		result[i] = '\0';
		++i;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		new_nbr = nbr;
		new_nbr = new_nbr * -1;
	}
	else
		new_nbr = nbr;
	convert(base, new_nbr, result, 0);
	len_res = get_len(result);
	print_reverse(result, 0, len_res);
}
