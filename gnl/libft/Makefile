# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/01 18:32:20 by mmthombe          #+#    #+#              #
#    Updated: 2017/11/19 00:53:20 by mmthombe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./includes/libft.h

SRC =	./includes/ft_strjoin.c\
	   ./includes/ft_strdup.c\
	   ./includes/ft_strchr.c\
	   ./includes/ft_strsub.c\
	   ./includes/ft_strlen.c\
	   ./includes/ft_memalloc.c\
	   ./includes/ft_bzero.c\
	   ./includes/ft_strcpy.c\
	   ./includes/ft_strncpy.c\
	   ./includes/ft_strnew.c\
	   ./includes/ft_strcat.c\
	   ./includes/ft_memset.c
 
OBJ =	ft_strjoin.o\
	   ft_strdup.o\
	   ft_strchr.o\
	   ft_strsub.o\
	   ft_strlen.o\
	   ft_memalloc.o\
	   ft_bzero.o\
	   ft_strcpy.o\
	   ft_strncpy.o\
	   ft_strnew.o\
	   ft_strcat.o\
	   ft_memset.o 

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
