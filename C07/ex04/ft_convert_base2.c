/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:47:04 by mhenin            #+#    #+#             */
/*   Updated: 2024/08/08 17:41:26 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	power(int a, int b)
{
	long long int	power;
	int				i;

	power = 1;
	i = 1;
	while (i <= b)
	{
		power = power * a;
		++i;
	}
	return (power);
}

int	where_letter(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i] != a && base[i] != 0)
		i++;
	if (base[i] == '\0')
		return (0);
	return (i);
}

int	get_len(char *str)
{
	int	i;
	int	c;
	int	a;

	i = 0;
	c = 0;
	a = 0;
	while (str[i])
	{
		if (str[i] <= 32 && a == 1)
			;
		else
		{
			++c;
			if (str[i] > 32)
				a = 1;
		}
		++i;
	}
	return (c);
}
