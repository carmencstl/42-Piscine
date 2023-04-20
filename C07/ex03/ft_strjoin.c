/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:36:53 by cacastil          #+#    #+#             */
/*   Updated: 2023/03/30 12:42:01 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		k;

	s = malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[k++] = sep[j++];
		}
		i++;
	}
	s[k] = '\0';
	return (s);
}

int main(void)
{
    int     i;
    char **strs;
    char *separator;
    char *result;

    strs = (char **)malloc(4 * sizeof(strs));
    strs[0] = "Hello";
    strs[1] = "World";
    strs[2] = "!";
    strs[3] = "1234";
    separator = "-";
    i = 0;
    while(i < 5)
    {
        result = ft_strjoin(i, strs, separator);
        printf("%d : |%s|\n", i, result);
        free(result);
        i++;
    }
}