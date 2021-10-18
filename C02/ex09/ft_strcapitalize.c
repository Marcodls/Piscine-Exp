/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: md-aless <md-aless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:25:08 by md-aless          #+#    #+#             */
/*   Updated: 2021/10/12 14:28:45 by md-aless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] > 64 && str[a] < 91)
			str[a] = str[a] + 32;
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] > 96 && str[0] < 123)
			str[0] = str[0] - 32;
		if (str[i] >= 0 && str[i] < 48 && str[i + 1] > 96 && str[i + 1] < 123)
			str[i + 1] = str[i + 1] - 32;
		if (str[i] > 57 && str[i] < 65 && str[i + 1] > 96 && str[i + 1] < 123)
			str[i + 1] = str[i + 1] - 32;
		if (str[i] > 90 && str[i] < 97 && str[i + 1] > 96 && str[i + 1] < 123)
			str[i + 1] = str[i + 1] - 32;
		if (str[i] > 122 && str[i] < 127 && str[i + 1] > 96 && str[i + 1] < 123)
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
