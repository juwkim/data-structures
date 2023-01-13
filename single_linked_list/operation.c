/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_linked_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:16:46 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/14 07:11:11 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "single_linked_list.h"

void	print_list(t_single_linked_list *list)
{
	t_node	*cur;

	cur = list->head->next;
	while (cur != NULL)
	{
		printf("%06d", cur->item);
		cur = cur->next;
	}
}

void	reverse(t_single_linked_list *list)
{
	t_node	*prev;
	t_node	*cur;
	t_node	*next;

	cur = NULL;
	next = list->head->next;
	while (next != NULL)
	{
		prev = cur;
		cur = next;
		next = next->next;
		cur->next = prev;
	}
	list->head->next = cur;
}

t_single_linked_list	*concatenate(t_single_linked_list *list1, \
										t_single_linked_list *list2)
{
	t_node	*cur;

	if (list1->head->next == NULL)
		return (list2);
	else if (list2->head->next == NULL)
		return (list1);
	else
	{
		cur = list1->head->next;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = list2->head->next;
		free(list2->head);
		return (list1);
	}
}
