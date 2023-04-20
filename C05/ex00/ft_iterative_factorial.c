/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:57:33 by cacastil          #+#    #+#             */
/*   Updated: 2023/03/23 11:01:53 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_iterative_factorial(int nb)
{	
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (nb > 1)
		{
			i = i * nb;
			nb--;
		}
		return (i);
	}
	else if (nb < 0)
		return (0);
	return (1);
}

/* int	main(void)
{
	int    nb;
    int    res;

    nb = 6;
    res = ft_iterative_factorial(nb);
    printf("%d\n", res);
    return (0);
} */