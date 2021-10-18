/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: md-aless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 08:21:26 by md-aless          #+#    #+#             */
/*   Updated: 2021/10/01 09:11:45 by md-aless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a1, char a2, char b1, char b2)
{
	ft_putchar(a1);
	ft_putchar(a2);
	ft_putchar(' ');
	ft_putchar(b1);
	ft_putchar(b2);
	if (a1 != '9' | a2 != '8' | b1 != '9' | b2 != '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;
	{
		a1 = '0' - 1;
		while (++a1 <= '9')
		{
			a2 = '0' - 1;
			while (++a2 <= '9')
			{
				b1 = a1 - 1;
				while (++b1 <= '9')
				{							
					b2 = a2;
					while (++b2 <= '9')
						ft_print(a1, a2, b1, b2);
					b2--;
				}	
			}
		}
	}
}
