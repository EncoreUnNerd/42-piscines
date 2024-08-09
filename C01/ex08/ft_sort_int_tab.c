/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:11:05 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/19 17:26:54 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	find_lowest(int size, int *i, int *tab, int *temp_tab)
{
	int	actual_lowest;
	int	c;
	int	e;

	actual_lowest = 2147483647;
	c = 0;
	e = 0;
	while (e < size)
	{
		if (tab[e] < actual_lowest)
		{
			actual_lowest = tab[e];
			c = e;
		}
		++e;
	}
	tab[c] = 2147483647;
	temp_tab[*i] = actual_lowest;
	++*i;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp_tab[999];
	int	i;

	i = 0;
	while (i < size)
	{
		find_lowest(size, &i, tab, temp_tab);
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temp_tab[i];
		++i;
	}
}
