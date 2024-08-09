/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:06:56 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/30 08:48:52 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;	

	i = 0;
	res = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			return (res);
		}
		++i;
	}
	if (s1[i] != s2[i])
	{
		res = s1[i] - s2[i];
		return (res);
	}
	return (0);
}

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

void	arraycpy(char array[999][999], char **arraytocopy)
{
	int		i;

	i = 1;
	while (arraytocopy[i])
	{
		ft_strcpy(array[i - 1], arraytocopy[i]);
		i++;
	}
}

void	sort(int argc, char array[999][999])
{
	int		i;
	int		j_min;
	int		j;
	char	temp[999];

	i = 0;
	while (i < argc - 1)
	{
		j_min = i;
		j = i + 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(array[j], array[j_min]) < 0)
				j_min = j;
			j++;
		}
		if (j_min != i)
		{
			ft_strcpy(temp, array[i]);
			ft_strcpy(array[i], array[j_min]);
			ft_strcpy(array[j_min], temp);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	array[999][999];
	int		i;
	int		j;

	arraycpy(array, argv);
	sort(argc, array);
	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (array[i][j])
		{
			write(1, &array[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
