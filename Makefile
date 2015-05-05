# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdeken <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/05 16:07:58 by mdeken            #+#    #+#              #
#    Updated: 2015/05/05 16:45:46 by mdeken           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS = -Wall -Werror -Wextra

LIBS = -L libft/ -lft

SRC = create_duo.c\
	  create_node.c\
	  ft_lstnewcust.c\
	  init_duo.c\
	  pa.c\
	  parkour_tree.c\
	  pb.c\
	  ra.c\
	  push_swap.c\
	  rra.c\
	  sa.c\
	  delete_node.c

OBJ = $(SRC:.c=.o)

all : lib $(NAME)

lib :
	@make -C libft/

$(NAME) : $(OBJ)
	gcc $(FLAGS) -o $(NAME) $^ $(LIBS)

%.o : %.c push.h
	gcc $(FLAGS) -o $@ -c $< -I libft/includes

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
