/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 08:32:56 by atamas            #+#    #+#             */
/*   Updated: 2023/09/21 08:47:19 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	numofchar;

	numofchar = 0;
	while (*str)
	{
		str++;
		numofchar++;
	}
	return (numofchar);
}
