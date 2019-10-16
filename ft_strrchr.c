/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:50:23 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 13:50:58 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int posi;
	int i;

	posi = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			posi = i;
		i++;
	}
	if (s[i] == c)
		return (char*)s + i;
	if (posi != -1)
		return (char *)s + posi;
	return (NULL);
}
