# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alhelson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/29 20:28:39 by alhelson          #+#    #+#              #
#    Updated: 2016/11/29 20:28:41 by alhelson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS= -Wall -Wextra -Werror
LIB_PATH=libft
INC=includes
INC_PATH= ./$(LIB_PATH)/$(INC)
NAME= ft_ls
##############
SRC_PATH=srcs

SRC_M_STAT_PATH=m_stat
SRC_M_DISPLAY_PATH=m_display
SRC_M_FLAG_PATH=m_flag
SRC_M_MANAGE_PATH=m_manage

OBJ_PATH=srcs

#################################################
### COLOR
##################################################

COL_BLACK	= \033[1;30m
COL_RED		= \033[1;31m
COL_GREEN	= \033[1;32m
COL_YELLOW	= \033[1;33m
COL_BLUE	= \033[1;34m
COL_PURPLE	= \033[1;35m
COL_WHITE	= \033[1;37m

##################################################
### SOURCES
###################################################

SRC_M_STAT=	ft_stat_type_file.c\
		ft_stat_extand_init_with_basic_inf.c ft_recup_d_rep.c ft_stat_extand_init_all_t_stat.c\
		ft_stat_extand_reverse.c ft_stat_extand_swap.c\
		ft_stat_extand_ascii_sort.c ft_stat_extand_time_modif_sort.c ft_stat_extand_max_size_name.c\
		ft_found_max_space_nlink.c ft_found_max_space_user.c ft_found_max_space_group.c ft_found_max_space_size.c\
		ft_stat_extand_init_with_size.c ft_stat_extand_set_elem.c ft_is_rep.c ft_found_first_name_file.c\
		ft_found_type_of_error_file.c ft_stat_extand_destruct.c ft_stat_destruct.c ft_stat_type_time.c ft_stat_generate_time.c

SRC_M_DISPLAY= ft_usage.c ft_display_basic_a.c ft_display_basic.c ft_display_basic_l.c\
ft_display_permi.c ft_display_nlink.c ft_display_user.c ft_display_group.c\
ft_display_size.c ft_str_modif_end_nb_sep.c ft_display_mtime.c\
ft_display_error_file.c ft_spe_display.c

SRC_M_FLAG= ft_main_flag.c ft_value_flag.c

SRC_M_MANAGE= ft_affect_data_at_table.c ft_display_basic_file_argv.c ft_ls.c ft_manage_display.c ft_manage_flag.c ft_manage_sort.c ft_manage_error_extand.c ft_manage_recurs.c
#################################################
#### OBJECT
################################################
OBJ_M_STAT= $(patsubst %.c, %.o, $(SRC_M_STAT))
OBJ_M_S=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_STAT))

OBJ_M_DISPLAY= $(patsubst %.c, %.o, $(SRC_M_DISPLAY))
OBJ_M_D=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_DISPLAY))

OBJ_M_FLAG= $(patsubst %.c, %.o, $(SRC_M_FLAG))
OBJ_M_F=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_FLAG))

OBJ_M_MANAGE= $(patsubst %.c, %.o, $(SRC_M_MANAGE))
OBJ_M_M=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_MANAGE))

############################################
### FORMAT PATH
###########################################
SRC_M_S=$(addprefix ./$(SRC_M_STAT_PATH)/, $(SRC_M_STAT))
SRC_M_D=$(addprefix ./$(SRC_M_DISPLAY_PATH)/, $(SRC_M_DISPLAY))
SRC_M_F=$(addprefix ./$(SRC_M_FLAG_PATH)/, $(SRC_M_FLAG))

##################################################
### RULES
###################################################

.PHONY: all lib clean fclean fcleanlib cleanlib $(NAME)

all: $(NAME)

$(NAME): lib $(OBJ_M_S) $(OBJ_M_D) $(OBJ_M_F) $(OBJ_M_M)
	@echo "$(COL_GREEN) [$(NAME)]"
	@$(CC) $(CFLAGS) main.c $(OBJ_M_S) $(OBJ_M_D) $(OBJ_M_F) $(OBJ_M_M) -I ./$(INC) -I ./$(LIB_PATH)/$(INC) -L ./$(LIB_PATH)/ -lft -o $(NAME)

$(OBJ_M_S): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_STAT_PATH)%.c
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(INC) -c $< -o $@

$(OBJ_M_D): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_DISPLAY_PATH)%.c
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(INC) -c $< -o $@
	@echo "COMPIL [MOD DISPLAY]"

$(OBJ_M_F): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_FLAG_PATH)%.c
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(INC) -c $< -o $@
	@echo "COMPIL [M_FLAG]"

$(OBJ_M_M): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_MANAGE_PATH)%.c
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(INC) -c $< -o $@
	@echo "COMPIL [M_MANAGE]"

cleanlib:
	@cd $(LIB_PATH) && make clean
	@echo "$(COL_WHITE)[ CLEAN LIBFT ]\n"

fcleanlib: cleanlib
	@cd $(LIB_PATH) && make fclean
	@echo "$(COL_WHITE)[ FCLEAN LIBFT ]\n"

clean: cleanlib
	@rm -f $(OBJ_M_S) $(OBJ_M_D) $(OBJ_M_F) $(OBJ_M_M)
	@echo "[CLEAN]"

fclean: clean fcleanlib
	@rm -f $(NAME)
	@echo "DELETE [$(NAME)]"

lib:
	@cd $(LIB_PATH) && make
	@echo "$(COL_WHITE)[ GENERATE LIBFT ]\n"

re: fclean all
