/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_tail.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:39:09 by jalves-c          #+#    #+#             */
/*   Updated: 2023/09/06 19:48:59 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_list_add_tail(t_list *head, int new_value)
{
	t_list	*new_node;
	t_list	*current_node;

	new_node = calloc(1, sizeof(t_list));
	new_node->value = new_value;
	if (head)
	{
		current_node = head;
		while (current_node->next_node)
			current_node = current_node->next_node;
		current_node->next_node = new_node;
		return (head);1
	}
	return (new_node);
}
