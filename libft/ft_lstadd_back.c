/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:54:56 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/28 19:08:19 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	t_list	*tail;

	if (!*lst)
		*lst = new;
	else
	{
		current = *lst;
		tail = NULL;
		while (current)
		{
			tail = current;
			current = current->next;
		}
		tail->next = new;
	}
}
