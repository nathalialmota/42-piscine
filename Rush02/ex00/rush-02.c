/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:33:22 by raferraz          #+#    #+#             */
/*   Updated: 2024/07/28 19:34:05 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_str(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	write(1, str, len);
}

int	is_valid_integer(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	write_units(unsigned int number)
{
	const char	*units[] = {"zero", "one", "two", "three",
		"four", "five", "six", "seven", "eight", "nine"};

	write_str(units[number]);
}

void	write_tens(unsigned int number)
{
	const char	*teens[] = {"ten", "eleven", "twelve", "thirteen",
		"fourteen", "fifteen", "sixteen", "seventeen",
		"eighteen", "nineteen"};
	const char	*tens[] = {"", "", "twenty", "thirty", "forty",
		"fifty", "sixty", "seventy", "eighty", "ninety"};

	if (number >= 20)
	{
		write_str(tens[number / 10]);
		if (number % 10 > 0)
		{
			write_str(" ");
			write_units(number % 10);
		}
	}
	else if (number >= 10)
	{
		write_str(teens[number - 10]);
	}
	else
	{
		write_units(number);
	}
}
