/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 01:04:50 by atamas            #+#    #+#             */
/*   Updated: 2023/09/12 20:58:59 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	finder(char *str, char *to_find)
{
	while (*str && *to_find && *str != '\0' && *to_find != '\0')
	{
		if (*str != *to_find)
		{
			return (0);
		}
		str++;
		to_find++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	while (*str && *to_find && *str != '\0' && *to_find != '\0')
	{
		if (*str == *to_find)
		{
			if (finder(str, to_find) == 1)
				return (str);
		}
		str++;
	}
	return (NULL);
}
