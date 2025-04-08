# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 12:46:46 by msimoes           #+#    #+#              #
#    Updated: 2025/04/08 17:53:19 by msimoes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIR = srcs
INC_DIR = includes
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
COMP_LIB = ar rcs
RM = rm -f
CC = cc
CC_FLAGS = -c -Wall -Wextra -Werror
OBJS = $(SRC:.c=.o)

.c.o:
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(COMP_LIB) $(NAME) $(OBJS)


all: $(NAME)
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
	
	