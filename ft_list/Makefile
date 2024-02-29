# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 01:19:37 by jalves-c          #+#    #+#              #
#    Updated: 2023/06/22 13:20:11 by jalves-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= list.a
CC 		= cc
CFLAGS	= -Wall -Wextra -Werror -I .
RM 		= rm -f
SRC		=	ft_list_add_head.c \
			ft_list_add_tail.c \
			ft_list_delete_head.c \
			ft_list_delete_tail.c \
			ft_delete_first_match_in_list.c \
			ft_delete_matches_in_list.c \
			ft_list_print.c \
			ft_list_len.c \
			ft_is_in_list.c \
			ft_count_matches_in_list.c \
			ft_replace_matches_in_list.c \

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):    $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:    clean
		$(RM) $(NAME)

re:	fclean $(NAME)