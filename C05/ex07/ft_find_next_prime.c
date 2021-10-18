/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: md-aless <md-aless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:37:39 by md-aless          #+#    #+#             */
/*   Updated: 2021/10/18 14:38:01 by md-aless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
		return (0);
	while (div <= nb / div)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_prime(nb) == 1)
		return (nb);
	while (ft_prime(nb) == 0)
	{
		if (ft_prime(nb) == 1)
			break ;
		nb++;
	}
	return (nb);
}
