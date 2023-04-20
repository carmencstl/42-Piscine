/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:38:00 by cacastil          #+#    #+#             */
/*   Updated: 2023/03/28 11:43:01 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <string.h>
#include <stdio.h> */
int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		len;
	int		i;

	len = ft_strlen(src);
	i = 0;
	dst = malloc(sizeof(*src) * (len + 1));
	if (dst == 0)
		return (0);
	while (i <= len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/* int main(void)
{
	char *src;
	src = "hello";

	printf("%s\n", strdup(src));
	printf("%s\n", ft_strdup(src));
} */