/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:05:23 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 15:05:35 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (s == 0)
		return (0);
	dst = malloc(len + 1);
	if (dst == 0)
		return (0);
	while (i < len && s[i + start])
	{
		dst[i] = s[i + start];
		i++;
	}
	while (i < len + 1)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
