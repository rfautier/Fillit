#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfautier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/23 20:54:38 by rfautier          #+#    #+#              #
#    Updated: 2017/12/11 13:51:31 by rfautier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC_NAME =	openfile.c\
		   	buildtab.c\
			compareallstruct.c\
			comparestruct.c\
			fillrealtab.c\
			iscorrectchara.c\
			readfile.c\
			backtrack.c\
			allpossibilitie.c

SRC_PATH = .
OBJ_PATH = .
CC = gcc
CFLAGS = -Wall -Werror -Wextra
CPPFLAGS = -I . -I./libft
LDFLAGS = -Llibft/
LDLIBS = -lft
OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./libft
	$(CC) $(LDFLAGS) $(LDLIBS) $^ -o $@

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

.PHONY: all, clean, fclean, re

clean:
		/bin/rm -f $(OBJ)
		make clean -C ./libft
fclean: clean
		/bin/rm -f $(NAME)
		make fclean -C ./libft

re: fclean all
