/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:20:32 by atamas            #+#    #+#             */
/*   Updated: 2023/09/12 00:26:15 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*startofdest;

	startofdest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	dest = '\0';
	return (startofdest);
}
