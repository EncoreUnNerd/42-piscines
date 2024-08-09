/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:00:18 by mhenin            #+#    #+#             */
/*   Updated: 2024/08/01 18:52:29 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*array;

	if (min >= max)
		return (0);
	array = malloc(sizeof(int) * (max - min));
	i = 0;
	j = min;
	while (j < max)
	{
		array[i] = j;
		j++;
		i++;
	}
	return (array);
}

// int main()
// {
// 	ft_range(2147483637, 2147483647);
// }