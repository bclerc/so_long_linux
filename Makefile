# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allopez <allopez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 12:01:04 by allopez           #+#    #+#              #
#    Updated: 2021/10/06 15:09:28 by allopez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = $(MAIN_SRC) $(SRC_ERR) $(SRC_GNL) $(SRC_MAP) $(SRC_GAME)

MAIN_SRC = main.c errors.c utils.c

LIBFT_A = libft.a
LIBF_DIR = libft/
LIBFT  = $(addprefix $(LIBF_DIR), $(LIBFT_A))

GNL = get_next_line.c get_next_line_utils.c
SRC_GNL = $(addprefix gnl/, $(GNL))

MAP = 	map_reader.c map_checker.c map_checker_utils.c \
		tilemap_generator.c enemy_generator.c
SRC_MAP = $(addprefix map/, $(MAP))

GAME =	game_init.c open_images.c open_wall_images.c open_panel.c \
		input.c player_movement.c player_end.c update.c \
		render.c draw_wall.c \
		reset.c end_program.c
SRC_GAME = $(addprefix game/, $(GAME))

OBJ = *.o

FLAGS = -Wall -Wextra -Werror
INCLUDE = -Lmlx_linux -lmlx -Lmlx_linux -lm -lbsd -lX11 -lXext

NONE='\033[0m'
GREEN='\033[32m'
YELLOW='\033[33m'
GRAY='\033[2;37m'
CURSIVE='\033[3m'

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(CURSIVE)$(GRAY) "     - Making libft..." $(NONE)
	@make -C $(LIBF_DIR)
	@echo $(CURSIVE)$(GRAY) "     - Compiling $(NAME)..." $(NONE)
	@gcc $(FLAGS) $(OBJ) $(LIBFT) $(INCLUDE) -o $(NAME)
	@echo $(GREEN)"- Compiled -"$(NONE)

$(OBJ): $(SRC)
	@echo $(CURSIVE)$(GRAY) "     - Making object files..." $(NONE)
	@gcc $(FALGS) -c $(SRC)

exe: re
	@make -C ./ clean
	@echo $(YELLOW)"     - Executing $(NAME)... \n"$(NONE)
	@./$(NAME) $(m)
	@echo $(YELLOW)"\n     - Done -"$(NONE)

play: all
	@echo $(YELLOW)"     - Playing all maps... \n"$(NONE)
	@make -C ./ clean
	@./$(NAME) map_files/map_0.ber
	@./$(NAME) map_files/map_1.ber
	@./$(NAME) map_files/map_2.ber
	@./$(NAME) map_files/map_3.ber
	@./$(NAME) map_files/map_4.ber
	@./$(NAME) map_files/map_5.ber
	@./$(NAME) map_files/map_6.ber
	@./$(NAME) map_files/long.ber
	@./$(NAME) map_files/sergio.ber

norm:
	@echo $(GRAY) ""
	@norminette $(SRC) *.h */*.h
	@echo $(NONE) ""

libftnorm:
	@echo $(GRAY) ""
	@make -C $(LIBF_DIR) norm
	@echo $(NONE) ""

clean:
	@echo $(CURSIVE)$(GRAY) "     - Removing object files..." $(NONE)
	@rm -rf $(OBJ)
	@make -C $(LIBF_DIR) clean

fclean: clean
	@echo $(CURSIVE)$(GRAY) "     - Removing $(NAME)..." $(NONE)
	@rm -rf $(NAME)
	@make -C $(LIBF_DIR) fclean

re: fclean all
