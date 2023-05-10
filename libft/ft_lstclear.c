/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:36:02 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/02 15:09:12 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tail;

	if (!del || !lst)
		return ;
	current = *lst;
	tail = NULL;
	while (current)
	{
		del(current->content);
		tail = current;
		current = current->next;
		free(tail);
	}
	*lst = NULL;
}
