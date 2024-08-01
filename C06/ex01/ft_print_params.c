/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:07:33 by nade-lim          #+#    #+#             */
/*   Updated: 2024/08/01 12:45:14 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	arg;

	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while (argv[arg][i] != '\0')
		{
			write(1, &argv[arg][i], 1);
			i++;
		}
		write(1, "\n", 1);
		arg++;
	}
	return (0);
}
