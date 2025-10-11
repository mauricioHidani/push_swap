# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/27 18:59:53 by mhidani           #+#    #+#              #
#    Updated: 2025/10/11 10:20:52 by mhidani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= $(BIN_DIR)push_swap
LOCAL		= 42 São Paulo
VERSION		= 1.0.0v
JOIN		= github.com/mauricioHidani
CHECKER		= $(BIN_DIR)checker

CC			= cc
CFLAGS		= -g -Wall -Wextra -Werror
AR			= ar
ARFLAGS		= rcs

# Directories ------------------------------------------------------------------
SRCS_DIR	= srcs/
OBJS_DIR	= objs/
INCS_DIR	= includes/
LIBS_DIR	= libs/
BIN_DIR		= bin/

# Presentation Settings --------------------------------------------------------
RESET		:= \033[0m
ITALIC		:= \033[3m

C01			:= \033[38;5;27m# Blue
C02			:= \033[38;5;63m# Purplish blue
C03			:= \033[38;5;99m# Purple
C04			:= \033[38;5;135m# Magenta
C05			:= \033[38;5;171m# Pink
C06			:= \033[38;5;207m# Light pink
C07			:= \033[38;5;213m# Deep pink
C08			:= \033[38;5;219m# Pastel pink
C09			:= \033[38;5;215m# Soft orange
C10			:= \033[38;5;208m# Bright orange

# Dubly-Likned List ------------------------------------------------------------
DL_SLIB		= $(LIBS_DIR)dlist.a
DL_SRCS_DIR	= $(SRCS_DIR)dlist/
DL_OBJS_DIR = $(OBJS_DIR)dlist/
DL_SRCS		= \
			$(DL_SRCS_DIR)ft_clean_dlist.c $(DL_SRCS_DIR)ft_create_dlist.c \
			$(DL_SRCS_DIR)ft_create_dnoce.c $(DL_SRCS_DIR)ft_create_dnode.c \
			$(DL_SRCS_DIR)ft_indexof_dlist.c \
			$(DL_SRCS_DIR)ft_push_beg_dlist.c \
			$(DL_SRCS_DIR)ft_push_lst_dlist.c \
			$(DL_SRCS_DIR)ft_push_next_dlist.c \
			$(DL_SRCS_DIR)ft_push_prev_dlist.c \
			$(DL_SRCS_DIR)ft_remove_beg_dnode.c \
			$(DL_SRCS_DIR)ft_remove_dnode.c $(DL_SRCS_DIR)ft_remove_lst_dnode.c
DL_OBJS		= $(patsubst $(DL_SRCS_DIR)%.c, $(DL_OBJS_DIR)%.o, $(DL_SRCS))

# Libft ------------------------------------------------------------------------
LB_SLIB		= $(LIBS_DIR)libft.a
LB_SRCS_DIR	= $(SRCS_DIR)libft/
LB_OBJS_DIR = $(OBJS_DIR)libft/
LB_SRCS		= \
			$(LB_SRCS_DIR)ft_atoi.c $(LB_SRCS_DIR)ft_bzero.c \
			$(LB_SRCS_DIR)ft_calloc.c $(LB_SRCS_DIR)ft_clean_tab.c \
			$(LB_SRCS_DIR)ft_get_next_line.c $(LB_SRCS_DIR)ft_isalnum.c \
			$(LB_SRCS_DIR)ft_isalpha.c $(LB_SRCS_DIR)ft_isascii.c \
			$(LB_SRCS_DIR)ft_isdigit.c $(LB_SRCS_DIR)ft_isprint.c \
			$(LB_SRCS_DIR)ft_itoa.c $(LB_SRCS_DIR)ft_lstadd_back.c \
			$(LB_SRCS_DIR)ft_lstadd_front.c $(LB_SRCS_DIR)ft_lstclear.c \
			$(LB_SRCS_DIR)ft_lstdelone.c $(LB_SRCS_DIR)ft_lstiter.c \
			$(LB_SRCS_DIR)ft_lstlast.c $(LB_SRCS_DIR)ft_lstmap.c \
			$(LB_SRCS_DIR)ft_lstnew.c $(LB_SRCS_DIR)ft_lstsize.c \
			$(LB_SRCS_DIR)ft_memchr.c $(LB_SRCS_DIR)ft_memcmp.c \
			$(LB_SRCS_DIR)ft_memcpy.c $(LB_SRCS_DIR)ft_memmove.c \
			$(LB_SRCS_DIR)ft_memset.c $(LB_SRCS_DIR)ft_putchar_fd.c \
			$(LB_SRCS_DIR)ft_putendl_fd.c $(LB_SRCS_DIR)ft_putnbr_fd.c \
			$(LB_SRCS_DIR)ft_putstr_fd.c $(LB_SRCS_DIR)ft_putstrln_fd.c \
			$(LB_SRCS_DIR)ft_split.c \
			$(LB_SRCS_DIR)ft_split_respecting_target.c \
			$(LB_SRCS_DIR)ft_strchr.c $(LB_SRCS_DIR)ft_strdup.c \
			$(LB_SRCS_DIR)ft_striteri.c $(LB_SRCS_DIR)ft_strjoin.c \
			$(LB_SRCS_DIR)ft_strlcat.c $(LB_SRCS_DIR)ft_strlcpy.c \
			$(LB_SRCS_DIR)ft_strlen.c $(LB_SRCS_DIR)ft_strmapi.c \
			$(LB_SRCS_DIR)ft_strncmp.c $(LB_SRCS_DIR)ft_strnstr.c \
			$(LB_SRCS_DIR)ft_strrchr.c $(LB_SRCS_DIR)ft_strtrim.c \
			$(LB_SRCS_DIR)ft_substr.c $(LB_SRCS_DIR)ft_tolower.c \
			$(LB_SRCS_DIR)ft_toupper.c
LB_OBJS		= $(patsubst $(LB_SRCS_DIR)%.c, $(LB_OBJS_DIR)%.o, $(LB_SRCS))

# Push Swap --------------------------------------------------------------------
PS_SLIB		= $(LIBS_DIR)push_swap.a
PS_SRCS_DIR	= $(SRCS_DIR)push_swap/
PS_OBJS_DIR	= $(OBJS_DIR)push_swap/
PS_SRCS		= \
			$(PS_SRCS_DIR)ft_calc_cost.c $(PS_SRCS_DIR)ft_check_order.c \
			$(PS_SRCS_DIR)ft_figure_utils.c $(PS_SRCS_DIR)ft_find_best_target.c \
			$(PS_SRCS_DIR)ft_handle_movement.c $(PS_SRCS_DIR)ft_sfive_nbrs.c \
			$(PS_SRCS_DIR)ft_smany_nbrs.c $(PS_SRCS_DIR)ft_sthree_nbrs.c \
			$(PS_SRCS_DIR)ft_stwo_nbrs.c $(PS_SRCS_DIR)ft_validate.c \
			$(PS_SRCS_DIR)ft_validate_first.c $(PS_SRCS_DIR)ft_push.c \
			$(PS_SRCS_DIR)ft_reverse_rotate.c \
			$(PS_SRCS_DIR)ft_reverse_rotate_rotate.c $(PS_SRCS_DIR)ft_rotate.c \
			$(PS_SRCS_DIR)ft_rotate_rotate.c $(PS_SRCS_DIR)ft_swap.c \
			$(PS_SRCS_DIR)ft_swap_swap.c
PS_OBJS		= $(patsubst $(PS_SRCS_DIR)%.c, $(PS_OBJS_DIR)%.o, $(PS_SRCS))

MAIN_SRC	= push_swap.c
MAIN_OBJ	= $(PS_OBJS_DIR)push_swap.o
CK_MN_SRC	= checker.c
CK_MN_OBJ	= $(PS_OBJS_DIR)checker.o

# Base =========================================================================
all: push_swap_banner $(NAME)

$(NAME): $(LB_SLIB) $(DL_SLIB) $(PS_SLIB) $(MAIN_OBJ) | $(LIBS_DIR) $(BIN_DIR)
	@$(CC) $(CFLAGS) -I$(INCS_DIR) $(MAIN_OBJ) $(PS_SLIB) $(DL_SLIB) \
	$(LB_SLIB) -o $@
	@echo "🦎 $(C03)Compile Push Swap$(RESET)"

$(LIBS_DIR):
	@mkdir -p $@

$(BIN_DIR):
	@mkdir -p $@

# Dubly-Linked List ============================================================
$(DL_SLIB): $(DL_OBJS) | $(LIBS_DIR)
	@$(AR) $(ARFLAGS) $@ $^
	@echo "📥 $(C04)Generate static lib Doubly-List$(RESET)"

$(DL_OBJS_DIR)%.o: $(DL_SRCS_DIR)%.c | $(DL_OBJS_DIR)
	@$(CC) $(CFLAGS) -I$(INCS_DIR) -c $< -o $@

$(DL_OBJS_DIR):
	@mkdir -p $@

# Libft ========================================================================
$(LB_SLIB): $(LB_OBJS) | $(LIBS_DIR)
	@$(AR) $(ARFLAGS) $@ $^
	@echo "📥 $(C04)Generate static lib Libft$(RESET)"

$(LB_OBJS_DIR)%.o: $(LB_SRCS_DIR)%.c | $(LB_OBJS_DIR)
	@$(CC) $(CFLAGS) -I$(INCS_DIR) -c $< -o $@

$(LB_OBJS_DIR):
	@mkdir -p $@

# Push Swap ====================================================================
$(PS_SLIB): $(PS_OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@echo "📥 $(C04)Generate static lib Push-Swap$(RESET)"

$(PS_OBJS_DIR)%.o: $(PS_SRCS_DIR)%.c | $(PS_OBJS_DIR)
	@$(CC) $(CFLAGS) -I$(INCS_DIR) -c $< -o $@

$(MAIN_OBJ): $(MAIN_SRC)
	@$(CC) $(CFLAGS) -I$(INCS_DIR) -c $< -o $@

$(PS_OBJS_DIR):
	@mkdir -p $@

# Checker ======================================================================
bonus: $(LB_SLIB) $(DL_SLIB) $(PS_SLIB) $(CK_MN_OBJ)
	@$(CC) $(CFLAGS) -I$(INCS_DIR) $(CK_MN_OBJ) $(PS_SLIB) $(DL_SLIB) $(LB_SLIB) \
	-o $(CHECKER)
	@echo "🦎 $(C03)Compile Checker Push-Swap$(RESET)"

$(CK_MN_OBJ): $(CK_MN_SRC)
	@$(CC) $(CFLAGS) -I$(INCS_DIR) -c $< -o $@

# Utils ========================================================================
clean:
	@echo "🧹 $(C02)$(ITALIC)Clean$(RESET)"
	@rm -rf $(DL_OBJS_DIR)
	@rm -rf $(LB_OBJS_DIR)
	@rm -rf $(PS_OBJS_DIR)
	@rm -rf $(OBJS_DIR)
	@rm -f $(DL_SLIB)
	@rm -f $(LB_SLIB)
	@rm -f $(PS_SLIB)
	@rm -rf $(LIBS_DIR)

fclean: clean
	@echo "🧹 $(C02)$(ITALIC)Full Clean$(RESET)"
	@rm -rf $(BIN_DIR)

re: fclean all
	
push_swap_banner:
	@echo ""
	@echo "📍 $(C01)$(LOCAL)$(RESET)"
	@echo "$(C01) ______   __  __     ______     __  __ $(RESET)"
	@echo "$(C02)/\  == \ /\ \/\ \   /\  ___\   /\ \_\ \ $(RESET)"
	@echo "$(C03)\ \  _-/ \ \ \_\ \  \ \___  \  \ \  __ \ $(RESET)"
	@echo "$(C04) \ \_\    \ \_____\  \/\_____\  \ \_\ \_\ $(RESET)"
	@echo "$(C05)  \/_/     \/_____/   \/_____/   \/_/\/_/ $(RESET)"
	@echo "$(C06) ______     __     __     ______     ______ $(RESET)"
	@echo "$(C07)/\  ___\   /\ \  _ \ \   /\  __ \   /\  == \ $(RESET)"
	@echo "$(C08)\ \___  \  \ \ \/  .\ \  \ \  __ \  \ \  _-/ $(RESET)"
	@echo "$(C09) \/\_____\  \ \__/ .~\_\  \ \_\ \_\  \ \_\ $(RESET)"
	@echo "$(C10)  \/_____/   \/_/   \/_/   \/_/\/_/   \/_/ $(RESET)"
	@echo ""
	@echo "🧩 $(C01)$(ITALIC)push_swap - $(VERSION)$(RESET)"
	@echo "🚩 $(C02)$(ITALIC)$(JOIN)$(RESET)"

.PHONY: clean fclean all re push_swap_slib dlist_slib libft_slib checker
