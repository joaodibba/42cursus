/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_matches_in_list.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:51:30 by jalves-c          #+#    #+#             */
/*   Updated: 2023/06/22 01:25:42 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_delete_matches_in_list(t_list *head, int value, int *num_deleted)
{
	t_list	*current_node;
	bool	deleted;

	*num_deleted = 0;
	deleted = true;
	while (deleted)
	{
		deleted = false;
		current_node = ft_delete_first_match_in_list(head, value, &deleted);
		if (deleted)
			(*num_deleted)++;
		head = current_node;
	}
	return (head);
}
