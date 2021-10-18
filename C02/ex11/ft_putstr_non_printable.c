/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: md-aless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:24:22 by md-aless          #+#    #+#             */
/*   Updated: 2021/10/14 10:28:30 by md-aless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	is_printable(char c)
{
	return (c >= ' ' && c != 127);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	cc;

	i = 0;
	while (true)
	{
		cc = str[i];
		if (cc == '\0')
			break ;
		if (is_printable(cc))
			ft_putchar(cc);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[cc / 16]);
			ft_putchar("0123456789abcdef"[cc % 16]);
		}
		i++;
	}
}
