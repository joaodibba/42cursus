/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_delete_tail.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:41:03 by jalves-c          #+#    #+#             */
/*   Updated: 2023/06/22 00:41:20 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_list_delete_tail(t_list *head)
{
	t_list	*current_node;
	t_list	*previous;

	if (!head)
		return (NULL);
	if (head->next_node == NULL)
	{
		free(head);
		return (NULL);
	}
	previous = NULL;
	current_node = head;
	while (current_node->next_node)
	{
		previous = current_node;
		current_node = current_node->next_node;
	}
	previous->next_node = NULL;
	free(current_node);
	return (head);
}
