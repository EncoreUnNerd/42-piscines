/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:48:13 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/22 16:26:24 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	res;
	int	verif1;
	int	verif2;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		verif1 = (str[i] >= 'A' && str[i] <= 'Z');
		verif2 = (str[i] >= 'a' && str[i] <= 'z');
		if (!(verif1 || verif2))
		{
			res = 0;
			break ;
		}
		++i;
	}
	return (res);
}
