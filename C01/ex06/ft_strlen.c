/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:01:26 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/21 15:56:13 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	comprimento;

	comprimento = 0;
	while (*str)
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