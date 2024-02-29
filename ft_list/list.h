/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:35:15 by jalves-c          #+#    #+#             */
/*   Updated: 2023/06/22 13:19:15 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next_node;
}					t_list;

// PROTOTYPES
t_list	*ft_list_add_head(t_list *head, int new_value);
t_list	*ft_list_add_tail(t_list *head, int new_value);
t_list	*ft_list_delete_head(t_list *head);
t_list	*ft_list_delete_tail(t_list *head);
t_list	*ft_delete_first_match_in_list(t_list *head, int delete_value, \
															bool *was_deleted);
t_list	*ft_delete_matches_in_list(t_list *head, int value, int *num_deleted);
void	ft_print_list(t_list *node);
size_t	ft_list_len(t_list *head);
bool	ft_is_in_list(t_list *node, int value);
int		ft_count_matches_in_list(t_list *node, int value);
void	ft_replace_matches_in_list(t_list *node, int old_value, int new_value);

#endif