#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: fblom <marvin@codam.nl>                      +#+                      #
#                                                    +#+                       #
#    Created: 2019/05/02 15:07:19 by fblom         #+#    #+#                  #
#    Updated: 2019/05/02 15:07:19 by fblom         ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME = fractol

FLAGS = -Wall -Werror -Wextra -pthread -fsanitize=address

LIBM = minilibx_macos/

LIBFT = libft/

LIBMS = minilibx_macos

SRCS = fractol.c draw.c keys.c loops.c

OK			= [\033[32mOK\033[0m]
RED			= \033[1;31m
OFF			= \033[0m


all: $(NAME)

$(NAME):
		make -C $(LIBM)
		make -C $(LIBFT)
		gcc -o $(NAME) $(FLAGS) $(SRCS) -I $(LIBMS) -L $(LIBMS) \
		-lmlx -L $(LIBFT) -lft -framework OpenGL -framework AppKit
		@echo "$(OK) fractol compiled"

clean:
		make -C $(LIBM) clean
		make -C $(LIBFT) clean
		@echo "${RED}...Removing object files...${OFF}"

fclean: clean
		rm -rf $(NAME)
		make -C $(LIBFT) fclean

re: fclean all
		make -C $(LIBM) re
		make -C $(LIBFT) re

.PHONY		: all clean fclean re