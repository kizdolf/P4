# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jburet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/03/09 21:17:23 by jburet            #+#    #+#              #
#    Updated: 2014/03/09 21:59:55 by jburet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Puissance4

SRCS = main.c \
		entry.c \
		errors.c \
		array.c \
		fill_array.c \
		players.c \
		game.c \
	 	ctrl_array.c \
		lib_ctrl.c \
		i_a_ctrl.c \
		i_a_reboot.c \

V = 0

SILENCE_1 :=
SILENCE_0 :=@
SILENCE = $(SILENCE_$(V))

INCLUDE = ./includes
CFLAGS = -Wall -Werror -Wextra
CC = $(SILENCE)gcc
RM = $(SILENCE)rm -rf
MAKE = $(SILENCE)make V=$(V)

SRCPATH = ./srcs/

INCLUDES = -I$(INCLUDE)

SRC = $(addprefix $(SRCPATH), $(SRCS))
OBJS= $(SRC:.c=.o)

SKIP_1 :=
SKIP_0 := \033[A
SKIP = $(SKIP_$(V))
C = \033[0;33m
U = $(C)[$(NAME)]----->\033[0m

all: $(NAME)

$(NAME):$(OBJS)
	@echo "$(U)$(C)[LIBFT: \033[1;31m$<\033[A\033[0m"
	@echo "\033[0;32m"
	make -C ./libft
	@echo "$(U)$(C)[COMPILE:\033[1;32m DONE\033[0;33m]\033[0m"
	@echo "$(U)$(C)[BUILD]\033[0;32m"
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(INCLUDES) -L libft -lft
	@echo "$(SKIP)\033[2K$(SKIP)\033[2K"
	@echo "$(SKIP)$(U)$(C)[BUILD  :\033[1;32m DONE$(C)]\033[0m"

%.o: %.c
	@echo "$(U)$(C)[COMPILE: \033[1;31m$<\033[A\033[0m"
	@echo "\033[0;32m"
	$(CC) -o $@ $(CFLAGS) $(INCLUDES) -c -I./libft $<
	@echo "\033[1;31m [.working.]"
	@echo "$(SKIP)\033[2K\033[A\033[2K$(SKIP)"

clean:
	@echo "$(U)$(C)[CLEAN]\033[1;32m"
	@echo "$(U)$(C)[LIBFT: \033[1;31m$<\033[A\033[0m"
	@echo "\033[0;32m"
	$(RM) $(OBJS)
	@echo "$(SKIP)$(U)$(C)[CLEAN:\033[1;32m   DONE$(C)]\033[0m"

fclean: clean
	@echo "$(U)$(C)[F-CLEAN]\033[1;32m"
	$(RM) $(NAME)
	@echo "$(SKIP)$(U)$(C)[F-CLEAN:\033[1;32m DONE$(C)]\033[0m"

re: fclean all

.PHONY: clean fclean

