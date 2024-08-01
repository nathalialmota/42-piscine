/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:50:49 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/21 15:53:43 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 65;
	b = 10;
	printf("antes: a = %d | b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("depois: a = %d | b = %d\n", a, b);
	return (0);
}
*/