/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:06:51 by atamas            #+#    #+#             */
/*   Updated: 2023/08/26 19:31:32 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	tmp;

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		tmp = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp;
		start++;
		end--;
	}
}
