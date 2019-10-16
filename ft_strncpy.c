/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 00:21:03 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 18:53:34 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *source, size_t len)
{
	size_t i;

	i = 0;
	while (source[i] && i < len)
	{
		dest[i] = source[i];
		i++;
	}
	while (i < len)
		dest[i++] = '\0';
	return (dest);
}
