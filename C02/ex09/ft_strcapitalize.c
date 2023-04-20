/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:46:04 by cacastil          #+#    #+#             */
/*   Updated: 2023/03/23 10:42:45 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (65 <= str[x] && str[x] <= 90)
		{
			str[x] += 32;
		}
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	ft_strlowcase(str);
	if (97 <= str[x] && str[x] <= 122)
		str[x] -= 32;
	while (str[x] != '\0')
	{
		while (str[x] < '0' || (str[x] > '9' && str[x] < 'A'))
		{
			x++;
			if (97 <= str[x] && str[x] <= 122)
				str[x] -= 32;
		}
		while ((str[x] > 'Z' && str[x] < 'a') || str[x] > 'z')
		{
			x++;
			if (97 <= str[x] && str[x] <= 122)
				str[x] -= 32;
		}
		x++;
	}
	return(str);
}	
