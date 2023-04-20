/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:21:29 by cacastil          #+#    #+#             */
/*   Updated: 2023/03/21 11:13:57 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	contador(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;

	if (size <= contador(dest))
		return (size + contador(src));
	x = contador(dest);
	y = 0;
	while (src[y] != '\0' && x + 1 < size)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (contador(dest) + contador(&src[y]));
}
