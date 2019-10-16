/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:20:07 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 14:20:21 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*buf;
	size_t			i;

	i = 0;
	buf = malloc(size);
	while (buf && i < size)
	{
		buf[i] = 0;
		i++;
	}
	return (buf);
}
