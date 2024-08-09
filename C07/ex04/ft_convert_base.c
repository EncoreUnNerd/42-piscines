/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:23:41 by mhenin            #+#    #+#             */
/*   Updated: 2024/08/08 17:38:05 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

extern int	power(int a, int b);
extern int	where_letter(char a, char *base);
extern int	get_len(char *str);

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

long int	know_size(char *base, long int nbr)
{
	long int	div;
	long int	i;
	long int	len_base;

	len_base = get_len(base);
	div = nbr;
	i = 0;
	while (div > len_base)
	{
		div = div / len_base;
		i++;
	}
	return (i * 2 + 1);
}

int	convert(char *base, long int nbr[2], char *res, int tries)
{
	int	div;
	int	mod;
	int	r;
	int	len_base;

	len_base = get_len(base);
	div = nbr[0] / len_base;
	mod = nbr[0] % len_base;
	nbr[0] = div;
	if (div < len_base)
	{
		r = 1;
		if (tries == 0 && div == 0)
			r = 0;
		res[tries + nbr[1] + 2] = '\0';
		res[0 + nbr[1]] = base[div];
		res[r + nbr[1]] = base[mod];
		r = tries;
	}
	else
	{
		r = convert(base, nbr, res, tries + 1);
		res[(r + 1) - tries + nbr[1]] = base[mod];
	}
	return (r);
}

long int	convert_to_ten(char	*nbr, char *base_from)
{
	long int	i;
	int			signe;
	long int	res;
	long int	pow;

	signe = 1;
	i = 0;
	while (nbr[i] <= 32)
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			signe = signe * -1;
		i++;
	}
	res = 0;
	while (nbr[i] && nbr[i] != ' ')
	{
		pow = power(get_len(base_from), get_len(nbr) - (i + 1));
		res += where_letter(nbr[i], base_from) * pow;
		i++;
	}
	return (res * signe);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*res;
	long int	decimal[2];

	if (check_validity(base_from) != 0 || check_validity(base_to) != 0)
		return (0);
	if (get_len(base_from) < 2 || get_len(base_to) < 2)
		return (0);
	decimal[0] = convert_to_ten(nbr, base_from);
	decimal[1] = 0;
	if (decimal[0] < 0)
	{
		decimal[1] = 1;
		decimal[0] = decimal[0] * -1;
	}
	res = malloc(sizeof(char) * (know_size(base_to, decimal[0]) + decimal[1]));
	if (decimal[1] == 1)
		res[0] = '-';
	convert(base_to, decimal, res, 0);
	return (res);
}

// int	main()
// {
// 	printf("%s", ft_convert_base("40121 ", "0123456789", "0123456"));
// }