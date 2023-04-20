/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:19:04 by cacastil          #+#    #+#             */
/*   Updated: 2023/03/25 15:21:48 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
 
	i = ft_is_prime(nb);
	if (i == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

/* int    main(void)
{
	int nb;
	int i;
	
	nb = 12;
	i = ft_find_next_prime(nb);
	printf("%d\n", i);
} */