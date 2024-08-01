/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:04:42 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/21 15:53:13 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	x = 4;
	int	y = 2;

	printf("antes: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("depois: x = %d, y = %d\n", x, y);
	return (0);
}
*/