/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:11:46 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/23 09:32:49 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_state(char letter)
{
	int	i;
	int	b;
	int	c;

	i = (letter >= 'a' && letter <= 'z');
	b = (letter >= 'A' && letter <= 'Z');
	c = (letter >= '0' && letter <= '9');
	if (!(i || b || c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	state;

	i = 0;
	state = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && state == 1)
		{
			str[i] = str[i] - 32;
		}
		if (str[i] >= 'A' && str[i] <= 'Z' && state == 0)
		{
			str[i] = str[i] + 32;
		}
		++i;
		state = check_state(str[i - 1]);
	}
	return (str);
}
