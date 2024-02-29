/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_matches_in_list.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:45:21 by jalves-c          #+#    #+#             */
/*   Updated: 2023/06/22 01:03:11 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_replace_matches_in_list(t_list *node, int old_value, int new_value)
{
	if (node)
	{
		if (node->value == old_value)
			node->value = new_value;
		ft_replace_matches_in_list(node->next_node, old_value, new_value);
	}
}
