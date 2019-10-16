/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:31:16 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 18:56:50 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t i;
	size_t l;
	size_t r;

	l = 0;
	r = 0;
	i = 0;
	if (s == 0)
		return (0);
	while (s[l] > 0 && s[l] < 33)
		l++;
	while (s[l + i])
	{
		if (s[l + i] > 0 && s[l + i] < 33)
			r++;
		else
			r = 0;
		i++;
	}
	return (copy_words(s + l, i - r));
}
