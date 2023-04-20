/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:12:24 by cacastil          #+#    #+#             */
/*   Updated: 2023/03/14 16:12:52 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		a;

	i = 0;
	while (i < size / 2)
	{
		a = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = a;
		i++;
	}
}
