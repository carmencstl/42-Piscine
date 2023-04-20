/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:05:48 by cacastil          #+#    #+#             */
/*   Updated: 2023/03/20 15:56:20 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*result;

	result = str;
	if (*to_find == '\0')
		return (str);
	while (*result)
	{
		i = 0;
		if (*result == to_find[0])
		{
			while (result[i] == to_find[i] && to_find[i])
			i++;
			if (to_find[i] == '\0')
				return (result);
		}
		result++;
	}
	return (0);
}
