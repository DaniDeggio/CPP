# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 17:37:53 by dde-giov          #+#    #+#              #
#    Updated: 2024/09/11 16:44:39 by dde-giov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= FragTrap

CC := g++
FLAGS := -Wall -Wextra -Werror -std=c++98
RM := rm -f

OBJSDIR = objects

# COLORS
CLR_RMV := \033[0m
RED := \033[1;31m
GREEN := \033[1;32m
YELLOW := \033[1;33m
BLUE := \033[1;34m
CYAN := \033[1;36m

SRC :=	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \

OBJS := $(addprefix $(OBJSDIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(OBJSDIR)/%.o: %.cpp
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "$(GREEN)Compilation $(CLR_RMV)of $(YELLOW)$(NAME) $(CLR_RMV)..."
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) created [0m ✔️"

clean:
	@$(RM) $(OBJS)
	@echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean: clean
	@$(RM) $(NAME) -rf $(OBJSDIR)
	@echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re: fclean all

.PHONY: all clean fclean re
