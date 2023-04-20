/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:25:18 by cacastil          #+#    #+#             */
/*   Updated: 2023/03/22 11:48:52 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

int	ft_atoi_base(char *str, int base)
{
	int	i;
	int	n;
	int	nbase;

	nbase = ft_strlen(base);
	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		n = n * nbase + (str[i]);
		i++;
	}
	return (n);
}
