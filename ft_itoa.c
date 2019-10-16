/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:48:24 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 18:55:28 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	size_t	i;
	size_t	len;
	char	*dst;

	len = digit_res(n);
	if (n < 0)
		len++;
	dst = malloc(len + 1);
	if (dst == 0)
		return (0);
	dst[len] = '\0';
	if (n == 0)
		dst[0] = '0';
	if (n < 0)
		dst[0] = '-';
	i = 0;
	while (n != 0)
	{
		if (n < 0)
			dst[len - i++ - 1] = '0' + n % 10 * -1;
		else
			dst[len - i++ - 1] = '0' + n % 10;
		n = n / 10;
	}
	return (dst);
}
