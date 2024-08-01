/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:23:49 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/24 18:57:50 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	x[] = "AbCdEfG";
	char	y[] = "1234567";
	char	z[] = "";

	printf("%s: %d\n", x, ft_str_is_numeric(x));
	printf("%s: %d\n", y, ft_str_is_numeric(y));
	printf("%s: %d\n", z, ft_str_is_numeric(z));
	return (0);
}
*/