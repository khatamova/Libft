/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:38:13 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 14:38:28 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*dst;

	i = 0;
	if (s == 0)
		return (0);
	while (s[i])
		i++;
	dst = malloc(i + 1);
	if (dst == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		dst[i] = f(s[i]);
		i++;
	}
	dst[i] = 0;
	return (dst);
}
