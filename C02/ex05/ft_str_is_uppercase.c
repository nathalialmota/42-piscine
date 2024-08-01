/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:42:33 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/24 18:58:35 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
	i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	w[] = "1234567";
	char	x[] = "abcdefg";
	char	y[] = "ABCDEFG";
	char	z[] = "";

	printf("%s: %d\n", w, ft_str_is_uppercase(w));
	printf("%s: %d\n", x, ft_str_is_uppercase(x));
	printf("%s: %d\n", y, ft_str_is_uppercase(y));
	printf("%s: %d\n", z, ft_str_is_uppercase(z));
	return (0);
}
*/