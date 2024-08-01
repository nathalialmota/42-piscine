/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:14:10 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/28 19:50:54 by nade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_units(unsigned int number);
void	write_str(const char *str);
void	write_tens(unsigned int number);

void	write_hundred(unsigned int number)
{
	if (number >= 100)
	{
		write_units(number / 100);
		write_str(" hundred");
		number %= 100;
		if (number > 0)
		{
			write_str(" ");
		}
	}
	if (number > 0)
	{
		write_tens(number);
	}
}

void	write_billion(unsigned long long *number)
{
	if (*number >= 1000000000)
	{
		write_hundred(*number / 1000000000);
		write_str(" billion");
		*number %= 1000000000;
		if (*number > 0)
		{
			write_str(" ");
		}
	}
}

void	write_million(unsigned long long *number)
{
	if (*number >= 1000000)
	{
		write_hundred(*number / 1000000);
		write_str(" million");
		*number %= 1000000;
		if (*number > 0)
		{
			write_str(" ");
		}
	}
}

void	write_thousand(unsigned long long *number)
{
	if (*number >= 1000)
	{
		write_hundred(*number / 1000);
		write_str(" thousand");
		*number %= 1000;
		if (*number > 0)
		{
			write_str(" ");
		}
	}
}

void	write_number(unsigned long long number)
{
	if (number == 0)
	{
		write_units(0);
		return ;
	}
	write_billion(&number);
	write_million(&number);
	write_thousand(&number);
	if (number > 0)
	{
		write_hundred(number);
	}
}
