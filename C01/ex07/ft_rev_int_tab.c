/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: md-aless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:54:50 by md-aless          #+#    #+#             */
/*   Updated: 2021/10/12 10:31:05 by md-aless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	x;
	int	z;
	int	y;

	x = 0;
	z = size - 1;
	y = size / 2;
	while (x <= y)
	{
		temp = tab[x];
		tab[x] = tab[z];
		tab[z] = temp;
		x++;
		z--;
	}
}
