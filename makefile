# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/21 11:55:13 by andmigue          #+#    #+#              #
#    Updated: 2026/05/09 13:22:09 by andmigue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
	ft_calloc.c ft_memset.c ft_strdup.c ft_strlcpy.c \
	ft_strlen.c ft_strjoin.c ft_memcpy.c ft_strlcat.c \
	ft_substr.c ft_strchr.c ft_strtrim.c ft_strmapi.c \
	ft_striteri.c

OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re