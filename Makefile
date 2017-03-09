# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/21 22:29:30 by akerkeb           #+#    #+#              #
#    Updated: 2016/01/22 00:08:38 by akerkeb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBNAME = fillit.a
NAME = fillit
FLAG = -Wall -Wextra -Werror
SRC = check_block.c \
check_tet.c \
ft_add_list.c \
ft_check_block_plus.c \
ft_create_list_element.c \
ft_create_table.c \
ft_cut_tet_plus.c \
ft_cut_tetri.c \
ft_memalloc.c \
ft_memset.c \
ft_place.c \
ft_putchar.c \
ft_putendl.c \
ft_puttab.c \
main.c \
power_x.c \
solve_tet.c \
solve_tet_2.c \
test_2.c \
test_isvalid.c \
unplace.c

SRC1 = $(SRC:.c=.o)

all: $(NAME)
$(NAME) :
	@echo "Processing files..."
	@gcc $(FLAG) -c $(SRC)
	@ar rc $(LIBNAME) $(SRC1)
	@ranlib $(LIBNAME)
	@echo "Library $(LIBNAME) created "
	@gcc $(FLAG) -o $(NAME) main.c $(LIBNAME)
	@echo "$(NAME) created !"
	@rm -rf $(LIBNAME)
	@echo "Library $(LIBNAME) removed !"
clean:
	@rm -rf $(SRC1)
	@echo "Removing object files"
fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) removed !"
re: fclean all
