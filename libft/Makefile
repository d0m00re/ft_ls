#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/17 18:24:12 by tribeiro          #+#    #+#              #
#    Updated: 2016/11/24 16:17:18 by tribeiro         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

#################################################
### OPTION
##################################################

CC=gcc
CFLAGS= -Wall -Wextra -Werror
NAME=libft.a
SRC_PATH=srcs
SRC_M_LIBFT_PATH=s_ori
SRC_M_1D_INT_PATH=m_1d_int
OBJ_PATH=srcs
INC_PATH=includes
LIB_PATH=libft
INC=libft/includes

#################################################
### COLOR
##################################################

COL_BLACK		= \033[1;30m
COL_RED			= \033[1;31m
COL_GREEN		= \033[1;32m
COL_YELLOW		= \033[1;33m
COL_BLUE		= \033[1;34m
COL_PURPLE		= \033[1;35m
COL_WHITE		= \033[1;37m

#################################################
### SOURCES
##################################################

SRC_M_LIBFT=ft_atoi.c   ft_putnbr_fd.c          ft_strequ.c             ft_strnequ.c\
ft_bzero.c              ft_memcpy.c             ft_putstr.c             ft_striter.c            ft_strnew.c\
ft_memdel.c             ft_putstr_fd.c          ft_striteri.c           ft_strnstr.c\
ft_sqrt.c               ft_strjoin.c            ft_strrchr.c\
ft_memset.c             ft_strcat.c\
ft_number_of_line.c     ft_strchr.c             ft_strlen.c             ft_strstr.c\
ft_putchar.c            ft_strclr.c             ft_strmap.c             ft_strsub.c\
ft_isascii.c            ft_putchar_fd.c         ft_strcmp.c             ft_strmapi.c            ft_strtrim.c\
ft_memalloc.c           ft_putendl.c            ft_strcpy.c             ft_strncat.c            ft_swap.c\
ft_memccpy.c            ft_putendl_fd.c         ft_strdel.c             ft_strncmp.c\
ft_itoa.c               ft_memchr.c             ft_putnbr.c             ft_strdup.c             ft_strncpy.c            \
ft_str_resize_concat.c ft_str_cut_includ_behind_sep.c ft_str_return_extract_line_behind_sep.c ft_itoa_base.c\
ft_putnbr_li.c ft_putnbr_l.c ft_putnbr_ll.c ft_putnbr_li_u.c ft_itoa_base_ui.c ft_itoa_base_li_uli.c ft_putnbr_ui.c ft_putchar_uc.c ft_putchar_all_ascii.c\
ft_putstr_nb_char.c ft_size_int.c ft_size_long.c ft_init_tab_int.c ft_recup_dir_data.c ft_getopt.c\
ft_sorted_tab.c ft_str_extract_with_pos.c ft_rep_nb_file.c ft_str_reverse.c

SRC_M_1D_INT=ft_1d_int_del.c ft_1d_int_get_len.c ft_1d_int_init.c ft_1d_int_malloc_tab.c ft_1d_int_set_value_with_id.c\
ft_1d_int_del_tab.c ft_1d_int_destruct.c ft_1d_int_get_tab.c ft_1d_int_init_values.c ft_1d_int_set_len.c ft_1d_int_to_string.c

#################################################
### OBJECT
##################################################

OBJ_M_LIBFT=$(patsubst %.c, %.o, $(SRC_M_LIBFT))
OBJ_M_1D_INT=$(patsubst %c, %o, $(SRC_M_1D_INT))

#################################################
### FORMAT PATH
##################################################

SRC_M_L=$(addprefix ./$(SRC_M_LIBFT_PATH)/, $(SRC_M_LIBFT))
SRC_M_1=$(addprefix ./$(SRC_1D_M_INT_PATH)/, $(SRC_M_1D_INT))

OBJ_M_L=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_LIBFT))
OBJ_M_1D=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_1D_INT))

OBJS = $(OBJ_M_L) $(OBJ_M_1D)

#################################################
### RULES
##################################################

all: $(NAME)

$(NAME): $(OBJ_M_1D) $(OBJ_M_L)
	@ar rc $(NAME) $(OBJS)
	@echo "$(COL_YELLOW)[COMPIL LIB]"

$(OBJ_M_L): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_LIBFT_PATH)%.c
	@echo "$(COL_BLUE)[ COMPILE & ASSEMBLE STEPS : LIB ORI] \n"
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(INC) -c $< -o $@

$(OBJ_M_1D): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_1D_INT_PATH)%.c
	@echo "$(COL_BLUE)[ COMPILE & ASSEMBLE STEPS : TAB 1D INT] \n"
	@$(CC) $(CFLAGS) -I $(INC_PATH) -I $(INC) -c $< -o $@

clean:
	@echo "$(COL_YELLOW)[ CLEAN DIRECTORY ]\n"
	@rm -f $(OBJS)

fclean: clean
	@echo "$(COL_YELLOW)[ CLEAN DIRECTORY AND $(NAME) ]\n"
	@rm -f $(NAME)

re: fclean all
