# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/27 18:59:53 by mhidani           #+#    #+#              #
#    Updated: 2025/09/28 15:01:28 by mhidani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

CC			= cc
CFLAGS		= -g -Wall -Wextra -Werror
AR			= ar
ARFLAGS		= rcs
VALGRIND	= valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes

# Directories ------------------------------------------------------------------
SRCS_DIR	= srcs/
OBJS_DIR	= objs/
INCS_DIR	= includes/
LIBS_DIR	= libs/

# Dubly-Likned List ------------------------------------------------------------
DL_SLIB		= $(LIBS_DIR)dlist.a
DL_SRCS_DIR	= $(SRCS_DIR)dlist/
DL_OBJS_DIR = $(OBJS_DIR)dlsit/
DL_SRCS		= $(wildcard $(DL_SRCS_DIR)*.c) # todo: change to list
DL_OBJS		= $(patsubst $(DL_SRCS_DIR)%.c, $(DL_OBJS_DIR)%.o, $(DL_SRCS))

# Libft ------------------------------------------------------------------------
LB_SLIB		= $(LIBS_DIR)libft.a
LB_SRCS_DIR	= $(SRCS_DIR)libft/
LB_OBJS_DIR = $(OBJS_DIR)libft/
LB_SRCS		= $(wildcard $(LB_SRCS_DIR)*.c) # todo: change to list
LB_OBJS		= $(patsubst $(LB_SRCS_DIR)%.c, $(LB_OBJS_DIR)%.o, $(LB_SRCS))

# Push Swap --------------------------------------------------------------------
PS_SLIB		= $(LIBS_DIR)push_swap.a
PS_SRCS_DIR	= $(SRCS_DIR)push_swap/
PS_OBJS_DIR	= $(OBJS_DIR)push_swap/
PS_SRCS		= $(wildcard $(PS_SRCS_DIR)*.c) push_swap.c # todo: change to list
PS_OBJS		= $(patsubst $(PS_SRCS_DIR)%.c, $(PS_OBJS_DIR)%.o, $(PS_SRCS))

all: $(NAME)

$(NAME): $(PS_OBJS) $(DL_SLIB) $(LB_SLIB)
	$(CC) $(CFLAGS) -I$(INCS_DIR) $^ -o $@

# Dubly-Linked List ============================================================
$(DL_SLIB): $(DL_OBJS) | $(LIBS_DIR)
	$(AR) $(ARFLAGS) $@ $^

$(DL_OBJS_DIR)%.o: $(DL_SRCS_DIR)%.c | $(DL_OBJS_DIR)
	@$(CC) $(CFLAGS) -I$(INCS_DIR) -c $< -o $@
	@echo "Compiled $<"

$(DL_OBJS_DIR):
	mkdir -p $@

# Libft ========================================================================
$(LB_SLIB): $(LB_OBJS) | $(LIBS_DIR)
	$(AR) $(ARFLAGS) $@ $^

$(LB_OBJS_DIR)%.o: $(LB_SRCS_DIR)%.c | $(LB_OBJS_DIR)
	@$(CC) $(CFLAGS) -I$(INCS_DIR) -c $< -o $@
	@echo "Compiled $<"

$(LB_OBJS_DIR):
	mkdir -p $@

# Push Swap ====================================================================
$(PS_SLIB): $(PS_OBJS) | $(LIBS_DIR)
	$(AR) $(ARFLAGS) $@ $^

$(PS_OBJS_DIR)%.o: $(PS_SRCS_DIR)%.c | $(PS_OBJS_DIR)
	@$(CC) $(CFLAGS) -I$(INCS_DIR) -c $< -o $@
	@echo "Compiled $<"

$(PS_OBJS_DIR):
	mkdir -p $@

$(LIBS_DIR):
	mkdir -p $@

# ==============================================================================

clean:
	rm -rf $(DL_OBJS_DIR)
	rm -rf $(LB_OBJS_DIR)
	rm -rf $(PS_OBJS_DIR)
	rm -rf $(OBJS_DIR)
	rm -f $(DL_SLIB)
	rm -f $(LB_SLIB)
	rm -f $(PS_SLIB)
	rm -rf $(LIBS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
