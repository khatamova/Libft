/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 01:02:53 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 13:52:31 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hstack, const char *needle)
{
	size_t j;
	size_t i;

	i = 0;
	while (hstack[i])
	{
		j = 0;
		while (hstack[i + j] && hstack[i + j] == needle[j])
			j++;
		if (needle[j] == 0)
			return ((char*)hstack + i);
		i++;
	}
	if (*hstack == 0 && *needle == 0)
		return (char*)hstack;
	return (NULL);
}
