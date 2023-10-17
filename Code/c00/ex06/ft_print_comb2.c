/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:17:05 by atamas            #+#    #+#             */
/*   Updated: 2023/08/21 19:19:35 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	if (c >= '0' && c <= '9')
		write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	firtsnumber;
	int	secondnumber;

	firtsnumber = 00;
	secondnumber = 01;
	while (firtsnumber < 99)
	{
		secondnumber = firtsnumber + 1;
		while (secondnumber <= 99)
		{
			ft_putchar(firtsnumber / 10 + '0');
			ft_putchar(firtsnumber % 10 + '0');
			write(1, " ", 1);
			ft_putchar(secondnumber / 10 + '0');
			ft_putchar(secondnumber % 10 + '0');
			if (!(firtsnumber == 98 && secondnumber == 99))
				write(1, ", ", 2);
			secondnumber++;
		}
		firtsnumber++;
	}
}
