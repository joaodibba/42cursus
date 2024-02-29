/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_matches_in_list.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:44:10 by jalves-c          #+#    #+#             */
/*   Updated: 2023/06/22 01:03:44 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	ft_count_matches_in_list(t_list *node, int value)
{
	if (!node)
		return (0);
	if (node->value == value)
		return (1 + ft_count_matches_in_list(node->next_node, value));
	return (ft_count_matches_in_list(node->next_node, value));
}
