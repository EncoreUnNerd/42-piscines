/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:08:03 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/22 16:07:03 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	char				temp_letter;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		temp_letter = src[i];
		dest[i] = temp_letter;
		++i;
	}
	if (src[i] == '\0')
	{
		while (i < n)
		{
			dest[i] = '\0';
			++i;
		}
	}
	return (dest);
}
