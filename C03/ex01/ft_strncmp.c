/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:17:20 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/30 16:33:42 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n - 1 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "abwde";
	char	s2[] = "abcde";
	unsigned int	n;

	n = 2;
	n = ft_strncmp(s1, s2, n);
	printf("resultado: %d\n", n);
}
*/
