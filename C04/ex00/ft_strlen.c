/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:44:55 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/31 19:13:00 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	comprimento;

	comprimento = 0;
	while (*str != '\0')
	{
		comprimento++;
		str++;
	}
	return (comprimento);
}
/*
int	main(void)
{
	char	string[] = "Hello World!";
	int	comprimento = ft_strlen(string);

	printf("%d\n", comprimento);
	return (0);
}
*/