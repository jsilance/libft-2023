# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 21:43:42 by jusilanc          #+#    #+#              #
#    Updated: 2023/04/03 21:43:43 by jusilanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a


SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c \

FLAGS = -Wall -Wextra -Werror

OBJ = ${SRC:.c=.o}

${NAME}: ${OBJ}
		ar rc ${NAME} ${OBJ}
		ranlib ${NAME}

all: ${NAME}

%.o: %.c
		# cc ${FLAGS} -I libft.h -c $< -o ${<:.c=.o}
		cc ${FLAGS} -I ./ -c $< -o ${<:.c=.o}

clean:
		rm -rf ${OBJ}

fclean: clean
		rm -rf ${NAME}

re: fclean all

.PHONY: all re clean fclean
