/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:24:28 by atamas            #+#    #+#             */
/*   Updated: 2023/08/24 23:29:59 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_recursive(int n, int start, int *combination)
{
	int	i;

	if (n == 0)
	{
		i = 0;
		while (i++ < start)
			ft_putchar('0' + combination[i]);
		if (combination[0] != 10 - start)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	i = 0;
	if (start != 0)
		i = combination[start - 1] + 1;
	while (i++ <= 9)
	{
		combination[start] = i;
		ft_print_combn_recursive(n - 1, start + 1, combination);
	}
}

void	ft_print_combn(int n)
{
	int	combination[9];

	ft_print_combn_recursive(n, 0, combination);
}

int	main(void)
{
	ft_print_combn(2);
}