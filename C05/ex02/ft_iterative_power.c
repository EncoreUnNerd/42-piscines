/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:25:09 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/24 14:32:10 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	in_nb;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 0;
	in_nb = nb;
	while (i < power - 1)
	{
		nb = nb * in_nb;
		i++;
	}
	return (nb);
}
