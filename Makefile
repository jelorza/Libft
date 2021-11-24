# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 10:49:33 by jelorza-          #+#    #+#              #
#    Updated: 2021/11/24 20:09:44 by jelorza-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strchr.c ft_isalpha.c ft_isprint.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_memset.c ft_isascii.c ft_memcpy.c ft_strlcpy.c ft_isalnum.c ft_isdigit.c ft_strlen.c ft_bzero.c ft_strncmp.c ft_memcmp.c ft_memmove.c ft_memchr.c ft_atoi.c ft_strrchr.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c

SRC_BONUS = ft_lstnew.c

OBJS = $(SRC:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.0)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs

RM = rm -f

all: $(NAME) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(LIBC) $@ $^

bonus: $(OBJS_BONUS)
	$(LIBC) $(NAME) $^
		
clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
