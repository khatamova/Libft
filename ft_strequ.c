/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:01:25 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 15:01:36 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t i;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	while (s1[i] == s2[i])
		if (s1[i] == 0 && s2[i] == 0)
			return (1);
		else
			i++;
	return (0);
}