/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:35:37 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/24 18:58:47 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
	i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	v[] = "\nabcde";
	char	w[] = "1234567";
	char	x[] = "abcdefg";
	char	y[] = "ABCDEFG";
	char	z[] = "";

	printf("%s: %d\n", v, ft_str_is_printable(v));
	printf("%s: %d\n", w, ft_str_is_printable(w));
	printf("%s: %d\n", x, ft_str_is_printable(x));
	printf("%s: %d\n", y, ft_str_is_printable(y));
	printf("%s: %d\n", z, ft_str_is_printable(z));
	return (0);
}
*/