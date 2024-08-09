/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:08:16 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/22 14:00:14 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp_tab[999];

	i = 0;
	while (i < size)
	{
		temp_tab[i] = tab[size - i - 1];
		++i;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temp_tab[i];
		++i;
	}
}
