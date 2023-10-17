/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 01:11:48 by atamas            #+#    #+#             */
/*   Updated: 2023/09/10 22:45:05 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= ' ' && *str <= '~')
		{
			write(1, str, 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[(unsigned char)*str / 16], 1);
			write(1, &"0123456789abcdef"[(unsigned char)*str % 16], 1);
		}
		str++;
	}
}
