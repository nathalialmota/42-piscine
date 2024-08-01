/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:54:30 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/24 19:26:35 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
	i++;
	}
	return (1);
}

int	main()
{
	char x[] = "AbCdEfG";
	char y[] = "1234567";
	char z[] = "";

	printf("%s: %d\n", x, ft_str_is_alpha(x));
	printf("%s: %d\n", y, ft_str_is_alpha(y));
	printf("%s: %d\n", z, ft_str_is_alpha(z));   
	return (0);
}
