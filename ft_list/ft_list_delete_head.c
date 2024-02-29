/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_delete_head.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:40:18 by jalves-c          #+#    #+#             */
/*   Updated: 2023/06/22 01:03:21 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_list_delete_head(t_list *head)
{
	t_list	*new_head;

	new_head = NULL;
	if (!head)
		return (NULL);
	new_head = head->next_node;
	free(head);
	return (new_head);
}
