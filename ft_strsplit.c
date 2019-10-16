/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:17:25 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 18:23:47 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	len;
	size_t	word;
	char	**res;

	i = 0;
	word = 0;
	if (s == 0)
		return (0);
	count = count_segm(s, c);
	res = malloc(sizeof(char*) * (count + 1));
	if (res == 0)
		return (0);
	while (word < count)
	{
		i = i + skip_c(s + i, c);
		len = words_len(s + i, c);
		res[word] = copy_words(s + i, len);
		i = i + len;
		word++;
	}
	res[word] = 0;
	return (res);
}
