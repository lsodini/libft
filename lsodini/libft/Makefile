# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsodini <lsodini@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 15:58:08 by lsodini           #+#    #+#              #
#    Updated: 2024/01/24 18:09:59 by lsodini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC =	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_substr.c \
	ft_strtrim.c \
	ft_toupper.c \
	ft_tolower.c

BSRC =	ft_lstnew.c \
	ft_lstlast.c \
	ft_lstsize.c \
	ft_lstadd_front.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstclear.c \
	ft_lstmap.c

OBJECTS = $(SRC:.c=.o)

BOBJECTS = $(BSRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)  
	ar -crs $@ $?

bonus: $(OBJECTS) $(BOBJECTS)
	ar -crs $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all bonus

.PHONY: all bonus clean fclean re
