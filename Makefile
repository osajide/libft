# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osajide <osajide@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 19:57:01 by osajide           #+#    #+#              #
#    Updated: 2023/06/07 23:20:33 by osajide          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wall -Wextra
SRC = ft_toupper.c ft_tolower.c ft_substr.c \
ft_strtrim.c ft_strrchr.c ft_strnstr.c \
ft_strncmp.c ft_strmapi.c ft_strlen.c \
ft_strlcpy.c ft_strlcat.c ft_strjoin.c \
ft_striteri.c ft_strdup.c ft_strchr.c ft_split.c \
ft_split_charset.c ft_putstr_fd.c ft_putnbr_fd.c \
ft_putendl_fd.c ft_putchar_fd.c ft_memset.c \
ft_memmove.c ft_memcpy.c ft_memcmp.c \
ft_memchr.c ft_itoa.c ft_isprint.c \
ft_isdigit.c ft_isascii.c ft_isalpha.c \
ft_isalnum.c ft_calloc.c ft_bzero.c ft_atoi.c
OBJ = $(SRC:.c=.o)
NAME = libft.a
AR = ar -r
RM = rm -rf

%.o: %.c
	$(CC) $(CFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $@ $^

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re: fclean all
