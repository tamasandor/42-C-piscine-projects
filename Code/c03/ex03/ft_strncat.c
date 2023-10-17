/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:27:08 by atamas            #+#    #+#             */
/*   Updated: 2023/09/12 00:30:04 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*startofdest;

	startofdest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src && nb > 0)
	{
		*dest++ = *src++;
		nb--;
	}
	dest = '\0';
	return (startofdest);
}
