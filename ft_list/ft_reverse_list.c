/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:34:34 by jalves-c          #+#    #+#             */
/*   Updated: 2023/06/22 20:20:16 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_reverse_list(t_list *head)
{
	t_list	*current;
	t_list	*next;
	t_list	*temp;

	current = head;
	next = head->next_node;
	if (!head)
		return (NULL);
	if (!head->next_node)
		return (head);
	current->next_node = NULL;
	while (next)
	{
		temp = next->next_node;
		next->next_node = current;
		current = next;
		next = temp;
	}
	return (current);
}

// int	main(void)
// {
// 	t_list	*list;
// 	int		i;

// 	i = 0;
// 	list = NULL;
// 	while (i++ < 10)
// 		list = ft_list_add_tail(list, i);
// 	list = ft_reverse_list(list);
// 	ft_print_list(list);
// }
