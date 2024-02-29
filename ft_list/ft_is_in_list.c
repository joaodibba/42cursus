/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_in_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:43:07 by jalves-c          #+#    #+#             */
/*   Updated: 2023/06/22 01:03:35 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

bool	ft_is_in_list(t_list *node, int value)
{
	if (!node)
		return (NULL);
	if (node->value == value)
		return (true);
	return (ft_is_in_list(node->next_node, value));
}
