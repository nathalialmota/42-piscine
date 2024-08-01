/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:50:48 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/24 18:59:12 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	v[] = "CASA";
	char	w[] = "12345";
	char	x[] = "ferro";
	char	y[] = "CARRO";
	char	z[] = "";

	printf("%s\n", ft_strlowcase(v));
	printf("%s\n", ft_strlowcase(w));
	printf("%s\n", ft_strlowcase(x));
	printf("%s\n", ft_strlowcase(y));
	printf("%s\n", ft_strlowcase(z));
	return (0);
}
*/