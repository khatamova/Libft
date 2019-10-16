/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_segm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:40:32 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 17:28:11 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_segm(const char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	len;

	i = 0;
	count = 0;
	while (s[i])
	{
		i = i + skip_c(s + i, c);
		len = words_len(s + i, c);
		if (len != 0)
			count++;
		i = i + len;
	}
	return (count);
}
