/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:44:27 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 13:44:46 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t src_len;
	size_t i;

	src_len = 0;
	len = 0;
	i = 0;
	while (dst[len] && len < dstsize)
		len++;
	while (src[src_len])
		src_len++;
	while (i < src_len && len + i + 1 < dstsize)
	{
		dst[len + i] = src[i];
		i++;
	}
	while (len + i < dstsize)
	{
		dst[len + i] = '\0';
		i++;
	}
	return (len + src_len);
}
