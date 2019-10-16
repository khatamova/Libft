/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:09:36 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 17:38:25 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str3;

	i = 0;
	j = 0;
	if (str1 == NULL || str2 == NULL)
		return (NULL);
	len = ft_strlen(str1) + ft_strlen(str2) + 1;
	if ((str3 = malloc(sizeof(char) * len)) == 0)
		return (0);
	while (str1 && str1[i])
	{
		str3[i] = str1[i];
		i++;
	}
	while (str2 && str2[j])
	{
		str3[i] = str2[j];
		i++;
		j++;
	}
	str3[i] = '\0';
	return (str3);
}
