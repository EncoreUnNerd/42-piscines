/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:33:25 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/24 15:07:32 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	m;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power % 2 == 0)
	{
		m = ft_recursive_power(nb, (power / 2));
		return (m * m);
	}
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// int main()
// {
// 	int	res;

// 	res = ft_recursive_power(5, 5);
// 	printf("%d", res);
// }
