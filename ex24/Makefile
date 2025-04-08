# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 12:46:46 by msimoes           #+#    #+#              #
#    Updated: 2025/04/08 18:13:33 by msimoes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIR = srcs
INC_DIR = includes
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
COMP_LIB = ar rcs
RM = rm -f
CC = cc
CC_FLAGS = -c -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)
ADD = $(addprefix $(SRC_DIR)/, $(SRCS))

all: $(NAME)
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

$(OBJS):
	$(CC) $(CC_FLAGS) $(ADD) 

$(NAME): $(OBJS)
	$(COMP_LIB) $(NAME) $(OBJS)
	