/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:07:54 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/18 18:21:32 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alfabet;

	alfabet = 'a';
	while (alfabet <= 'z')
	{
		write(1, &alfabet, 1);
		alfabet++;
	}
}

int main()
{
    ft_print_alphabet();
    write(1, "\n", 1);
    return 0;
}
