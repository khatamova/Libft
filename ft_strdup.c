/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:56:22 by aikhatam          #+#    #+#             */
/*   Updated: 2019/07/17 17:00:05 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*temp;
	int		i;

	i = ft_strlen(src);
	temp = (char*)malloc(sizeof(*src) * (i + 1));
	if (temp == NULL)
		return (NULL);
	else
	{
		temp[i] = '\0';
		while (i >= 0)
		{
			temp[i] = src[i];
			i--;
		}
		return (temp);
	}
}
