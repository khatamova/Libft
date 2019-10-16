/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 11:28:44 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/12 11:32:06 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*dst;
	int		i;

	dst = s1;
	i = 0;
	while (*dst)
		dst++;
	while (s2[i])
		*(dst++) = s2[i++];
	*(dst++) = '\0';
	return (s1);
}