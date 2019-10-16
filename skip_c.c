/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:44:45 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 17:46:03 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	skip_c(const char *s, char c)
{
	size_t len;

	len = 0;
	while (s[len] == c)
		len++;
	return (len);
}