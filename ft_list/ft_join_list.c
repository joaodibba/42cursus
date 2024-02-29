/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:09:23 by jalves-c          #+#    #+#             */
/*   Updated: 2023/06/22 19:53:47 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_join_list(t_list *list1, t_list *list2)
{
	t_list	*current;

	current = list1;
	if (!list1)
		return (list2);
	while (current->next_node)
		current = current->next_node;
	current->next_node = list2;
	return (list1);
}
