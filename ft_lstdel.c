/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:00:45 by aikhatam          #+#    #+#             */
/*   Updated: 2019/10/15 16:00:59 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;

	if (alst == NULL || del == NULL)
		return ;
	current = *alst;
	if (current)
	{
		del(current->content, current->content_size);
		if (current->next)
			ft_lstdel(&current->next, del);
		free(current);
	}
	*alst = NULL;
}
