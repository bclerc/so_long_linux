# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allopez <allopez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 23:38:28 by allopez           #+#    #+#              #
#    Updated: 2021/10/06 16:33:59 by allopez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

IDIR = includes
_INC = libft.h
INC = $(patsubst %,$(IDIR)/%,$(_INC))

SDIR = .

_SRC =  ft_atoi.c \
		ft_strlen.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_strdup.c \
		ft_strnstr.c \
		ft_bzero.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strmapi.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c \
		ft_itoa.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_strrchr.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstadd_front.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_calloc.c \

SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

OBJ = $(_SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror
OPTS = -c -I$(IDIR)


all : $(NAME)

$(NAME) : $(OBJ)
	@gcc $(FLAGS) $(OPTS) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
$(OBJ) : $(SRC)
	@gcc $(FLAGS) $(OPTS) $(SRC)

clean :
	@/bin/rm -rf $(OBJ)

fclean : clean
	@/bin/rm -rf $(NAME)

re : fclean all
.PHONY : all clean fclean re
