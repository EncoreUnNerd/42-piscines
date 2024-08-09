/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:59:55 by mhenin            #+#    #+#             */
/*   Updated: 2024/08/08 14:16:11 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	temp_letter;

	i = 0;
	while (src[i] != '\0')
	{
		temp_letter = src[i];
		dest[i] = temp_letter;
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

void	attribute(t_stock_str *res, char **av, int ac)
{
	int	i;
	int	j;
	int	ac_str_len;

	i = 0;
	j = 0;
	while (i < ac)
	{
		ac_str_len = 0;
		while (av[i][ac_str_len])
			ac_str_len++;
		j = 0;
		res[i].str = (char *)malloc(sizeof(char) * ac_str_len + 1);
		res[i].copy = (char *)malloc(sizeof(char) * ac_str_len + 1);
		res[i].size = ac_str_len;
		ft_strcpy(res[i].str, av[i]);
		ft_strcpy(res[i].copy, av[i]);
		i++;
	}
	res[i].str = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			t;
	t_stock_str	*res;

	t = 0;
	while (av[t])
		t++;
	res = (t_stock_str *)malloc(sizeof(t_stock_str) * ac + 1);
	if (res == NULL)
		return (NULL);
	attribute(res, av, ac);
	return (res);
}
