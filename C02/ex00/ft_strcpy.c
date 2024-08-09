/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:53:48 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/23 09:14:07 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
