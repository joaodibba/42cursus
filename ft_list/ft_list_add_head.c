/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_head.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:37:50 by jalves-c          #+#    #+#             */
/*   Updated: 2023/06/22 01:03:32 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_list_add_head(t_list *head, int new_value)
{
	t_list	*new_node;

	new_node = calloc(1, sizeof(t_list));
	new_node->value = new_value;
	if (head)
		new_node->next_node = head;
	return (new_node);
}
