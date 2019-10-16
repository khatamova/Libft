/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:03:10 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 18:57:08 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			break ;
		if (s1[i] == 0 && s2[i] == 0)
			return (1);
		i++;
	}
	return (i == n);
}
