/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:11:09 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 14:11:29 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (dst == 0 && src == 0)
		return (0);
	if (dst >= src)
		while (len--)
			d[len] = s[len];
	else
		while (len--)
		{
			*d = *s;
			s++;
			d++;
		}
	return (dst);
}
