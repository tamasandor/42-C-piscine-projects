/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:00:41 by atamas            #+#    #+#             */
/*   Updated: 2023/09/18 23:54:53 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	counter;

	src_len = 0;
	dest_len = 0;
	counter = 0;
	while (src[src_len])
	{
		src_len++;
	}
	while (dest[dest_len] && size > dest_len)
	{
		dest_len++;
	}
	if (dest_len >= size)
		return (size + src_len);
	while (src[counter] && (size > dest_len + counter + 1))
	{
		dest[dest_len + counter] = src[counter];
		counter++;
	}
	dest[dest_len + counter] = '\0';
	return (src_len + dest_len);
}
