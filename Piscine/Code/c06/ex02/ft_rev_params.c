/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draglex <draglex@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 23:54:10 by draglex           #+#    #+#             */
/*   Updated: 2023/10/12 23:59:10 by draglex          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	num;

	num = 0;
	while (argc != 1)
	{
		argc--;
		while (argv[argc][num] != '\0')
		{
			write(1, &argv[argc][num], 1);
			num++;
		}
		write(1, "\n", 1);
		num = 0;
	}
	return (0);
}
