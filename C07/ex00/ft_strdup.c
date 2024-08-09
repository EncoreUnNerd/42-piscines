/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:18:31 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/31 18:05:39 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		src_len;
	int		i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	res = malloc(src_len + 1);
	i = 0;
	while (i < src_len + 1)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}	
