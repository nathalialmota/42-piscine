/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:54:05 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/28 19:34:38 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_str(const char *str);
void	write_units(unsigned int number);
void	write_tens(unsigned int number);
void	write_number(unsigned long long number);
void	write_hundred(unsigned int number);
void	write_billion(unsigned long long *number);
void	write_million(unsigned long long *number);
void	write_thousand(unsigned long long *number);
int		is_valid_integer(const char *str);

unsigned long long	str_to_ull(const char *str)
{
	unsigned long long	i;
	unsigned long long	num;

	num = 0;
	i = 0;
	while (str[i] != '\0')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

int	main(int argc, char **argv)
{
	unsigned long long	number;

	if (argc != 2)
	{
		write_str("Error\n");
		return (1);
	}
	if (!is_valid_integer(argv[1]))
	{
		write_str("Error\n");
		return (1);
	}
	number = str_to_ull(argv[1]);
	if (number > 999999999999)
	{
		write_str("Error\n");
		return (1);
	}
	write_number(number);
	write_str("\n");
	return (0);
}
