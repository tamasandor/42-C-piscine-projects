/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:40:27 by atamas            #+#    #+#             */
/*   Updated: 2023/10/07 00:10:35 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	counter;
	int	odd;

	counter = 0;
	odd = 1;
	while (nb > 0)
	{
		nb = nb - odd;
		odd += 2;
		counter++;
	}
	if (nb == 0)
	{
		return (counter);
	}
	else
	{
		return (0);
	}
}
