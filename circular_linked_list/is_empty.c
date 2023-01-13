/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 03:41:27 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/14 03:53:50 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_linked_list.h"

bool	is_empty(t_circular_list *list)
{
	return (list->size == 0);
}
