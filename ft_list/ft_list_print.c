/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:37:08 by jalves-c          #+#    #+#             */
/*   Updated: 2023/06/22 01:03:13 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_print_list(t_list *node)
{
	t_list	*current_node;
	int		index;

	index = 0;
	current_node = node;
	while (current_node)
	{
		printf("Node index: %d\t", index++);
		printf(" | value: %d\n", current_node->value);
		current_node = current_node->next_node;
	}
}
