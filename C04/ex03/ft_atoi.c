/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:36:26 by cacastil          #+#    #+#             */
/*   Updated: 2023/03/27 12:12:55 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	result;
	int	signo;
	int	i;

	result = 0;
	signo = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signo *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result) * 10 + (str[i] - '0');
		i++;
	}
	return (signo * result);
}

int	main(void)
{	
	int	result;
	
	char str[] = "  ---+--+1234ab567";
	result = ft_atoi(str);
	
	printf("%d\n", result);
	return (0);
}