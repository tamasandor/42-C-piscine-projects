/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:04:44 by atamas            #+#    #+#             */
/*   Updated: 2023/08/30 13:52:30 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ptrtodest;

	ptrtodest = dest;
	if (n > 0)
	{
		while (n > 0 && *src != '\0')
		{
			*dest++ = *src++;
			n--;
		}
		while (n > 0)
		{
			*dest++ = '\0';
			n--;
		}
	}
	return (ptrtodest);
}
