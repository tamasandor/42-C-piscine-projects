/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draglex <draglex@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:22:43 by atamas            #+#    #+#             */
/*   Updated: 2023/10/12 23:52:04 by draglex          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	num;
	int	param;

	num = 0;
	param = 1;
	while (param < argc)
	{
		while (argv[param][num] != '\0')
		{
			write(1, &argv[param][num], 1);
			num++;
		}
		param++;
		write(1, "\n", 1);
		num = 0;
	}
	return (0);
}
