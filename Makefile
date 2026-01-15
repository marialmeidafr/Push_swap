# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/23 15:11:22 by mariaalm          #+#    #+#              #
#    Updated: 2026/01/15 17:04:30 by mariaalm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------------------- #
#           SETTINGS            #
# ----------------------------- #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

RM = rm -rf

SRC_PATH		= .
BUILD_PATH		= .build
LIBFT_PATH = libft/Libft
INC_PATH		= includes

#includes
HEADERS				= $(INC_PATH)/push_swap.h
INC						= -I $(INC_PATH)

LIBS = libft/Libft/libft.h
LIBFT_ARC = $(LIBFT_PATH)/libft.a

# ----------------------------- #
#             FILES             #
# ----------------------------- #

FILES = checker.c \
		main.c \
		stack.c \
		free.c \
		sort.c \
		operations.c \
		helper.c

SRC						= $(addprefix $(SRC_PATH)/, $(FILES))
OBJS					= $(SRC:$(SRC_PATH)/%.c=$(BUILD_PATH)/%.o)

# ----------------------------- #
#            RULES              #
# ----------------------------- #

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_ARC)
	$(CC) $(CFLAGS) $(OBJS) $(INC) $(LIBFT_ARC) -o $(NAME)

$(BUILD_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir -p $(BUILD_PATH)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(LIBFT_ARC):
	make -C $(LIBFT_PATH)

val: re
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --tool=memcheck ./$(NAME) $(ARGS)

clean:
	make clean -C $(LIBFT_PATH)
	$(RM) $(BUILD_PATH);
	
fclean: clean
	make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
