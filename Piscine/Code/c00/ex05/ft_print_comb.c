/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 22:52:21 by atamas            #+#    #+#             */
/*   Updated: 2023/08/19 16:01:58 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_all(char firstnumber, char secondnumber, char thirdnumber)
{
	write(1, &firstnumber, 1);
	write(1, &secondnumber, 1);
	write(1, &thirdnumber, 1);
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char		firstnumber;
	char		secondnumber;
	char		thirdnumber;

	firstnumber = '0';
	secondnumber = '1';
	thirdnumber = '2';
	while (firstnumber <= '7')
	{
		while (secondnumber <= '8')
		{
			while (thirdnumber <= '9' && firstnumber != '7')
			{
				print_all(firstnumber, secondnumber, thirdnumber);
				thirdnumber++;
			}
			secondnumber++;
			thirdnumber = secondnumber + 1; 
		}
		firstnumber++;
		secondnumber = firstnumber + 1;
		thirdnumber = secondnumber + 1;
	}
	write(1, "789", 3);
}
