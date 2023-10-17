/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:48:13 by atamas            #+#    #+#             */
/*   Updated: 2023/08/18 21:54:11 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(int number)
{
	number += '0';
	write(1, &number, 1);
}

void	ft_print_numbers(void)
{
	int	number;

	number = 0;
	while (number <= 9)
	{
		printchar(number);
		number++;
	}
}
