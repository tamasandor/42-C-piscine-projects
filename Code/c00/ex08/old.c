/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:14:27 by atamas            #+#    #+#             */
/*   Updated: 2023/08/24 23:01:31 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	combination[9];
	int	continuegenerating;
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	continuegenerating = 1;
	while (i < n)
	{
		combination[i] = i;
		i++;
	}
	while (continuegenerating == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar('0' + combination[i]);
			i++;
		}
		if (combination[0] == (10 - n))
		{
			continuegenerating = 0;
		}
		else
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		combination[n - 1]++;
		i = n - 1;
		while (i > 0)
		{
			if (combination[i] > 9)
			{
				combination[i - 1]++;
				combination[i] = combination[i - 1] + 1;
			}
			i--;
		}
	}
}

int	main(void)
{
	ft_print_combn(3);
}
