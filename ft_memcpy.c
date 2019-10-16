/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:05:13 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 14:05:25 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	if (dst == 0 && src == 0)
		return (0);
	d = dst;
	s = (void*)src;
	while (n > 0)
	{
		*(d++) = *(s++);
		n--;
	}
	return (dst);
}
