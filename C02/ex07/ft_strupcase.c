/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:57:15 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/24 18:59:01 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}	
	i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	v[] = "casa";
	char	w[] = "12345";
	char	x[] = "ferro";
	char	y[] = "CARRO";
	char	z[] = "";

	printf("%s\n", ft_strupcase(v));
	printf("%s\n", ft_strupcase(w));
	printf("%s\n", ft_strupcase(x));
	printf("%s\n", ft_strupcase(y));
	printf("%s\n", ft_strupcase(z));
	return (0);
}
*/