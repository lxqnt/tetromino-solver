#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschroed <bschroed@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/05 14:04:01 by bschroed          #+#    #+#              #
#    Updated: 2017/10/18 16:52:09 by aquint           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CC = gcc
CFLAGS = -Wall -Wextra -Werror
MEMFLAGS = -fsanitize=address
SRC =
GREEN = \x1b[32;01m
YELLOW = \x1b[33;01m
RED = \x1b[31;01m
NO_COLOR = \x1b[0m

SRCFIL += fillit.c
SRCFIL += store_piece.c
SRCFIL += piece_validation.c
SRCFIL += solve_fillit.c

MAIN = fillit.c

OBJ = $(SRCFIL:.c=.o)

MAX			:= $(words $(OBJ))
increment	= $1 x
n			:= x
COUNTER		= $(words $n)$(eval n := $(call increment, $n))

all: $(NAME)

$(OBJ): %.o: %.c
	@printf "$(YELLOW)\r>>COMPILING: [$(GREEN)%d$(YELLOW)/$(GREEN)%d$(YELLOW)]" $(COUNTER) $(MAX)
	@$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJ) 
	@printf "\n"
	@echo "$(YELLOW)>>CREATING LIBRARY...$(NO_COLOR)"
	$(MAKE) -C ./libft 
	@echo "$(YELLOW)>>CREATING FILLIT...$(NO_COLOR)"
	$(CC) $(SRCFIL) -L libft -lft $(CFLAGS) -o $(NAME)
	@echo "$(GREEN)>>DONE!"

clean:
	@echo "$(RED)>>DELETING OBJECT FILES..."
	$(MAKE) clean -C ./libft
	@rm -f $(OBJ)
	@echo "$(GREEN)>>DONE!"

fclean: clean
	@echo "$(RED)>>DELETING $(NAME)"
	$(MAKE) fclean -C ./libft
	@rm -f $(NAME)
	@echo "$(GREEN)>>DONE!"

re: fclean all

.PHONY: all clean fclean re
