/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:18:23 by cacastil          #+#    #+#             */
/*   Updated: 2023/03/24 12:05:01 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
		power--;
	}
	return (nb);
}

/* int main(void)
{
    int nb;
    int power;

    nb = 5;
    power = 3;
    printf("%d\n", ft_recursive_power(nb, power));
    return (0);
} */