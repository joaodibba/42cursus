/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_first_match_in_list.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:01:38 by jalves-c          #+#    #+#             */
/*   Updated: 2023/06/22 19:33:14 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	delete_node(t_list *prev, t_list *current, bool *was_deleted)
{
	prev->next_node = current->next_node;
	free(current);
	*was_deleted = true;
}

t_list	*ft_delete_first_match_in_list(t_list *head, int delete_value, \
															bool *was_deleted)
{
	t_list	*current;
	t_list	*previous;

	if (!head)
		return (head);
	current = head;
	previous = NULL;
	while (current)
	{
		if (current->value == delete_value)
		{
			*was_deleted = true;
			if (!previous)
				head = current->next_node;
			else
				previous->next_node = current->next_node;
			free(current);
			break ;
		}
		previous = current;
		current = current->next_node;
	}
	return (head);
}
