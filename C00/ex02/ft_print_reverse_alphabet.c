/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:13:55 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/18 18:25:31 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alfabet;

	alfabet = 'z';
	while (alfabet >= 'a')
	{
		write(1, &alfabet, 1);
		alfabet--;
	}
}

int main()
{
    ft_print_reverse_alphabet();
    write(1, "\n", 1);
    return 0;
}
