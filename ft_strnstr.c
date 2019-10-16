/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:54:30 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 13:54:51 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (len == 0 && ft_strlen(needle) > 0)
		return (NULL);
	else if (len == 0 && ft_strlen(needle) == 0)
		return (char*)hstack;
	while (hstack[i] && i < len)
	{
		j = 0;
		while (hstack[i + j] && hstack[i + j] == needle[j] && i + j < len)
			j++;
		if (needle[j] == 0)
			return ((char*)hstack + i);
		i++;
	}
	return (NULL);
}
