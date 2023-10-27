# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 11:34:59 by goda-sil          #+#    #+#              #
#    Updated: 2023/10/24 12:01:20 by goda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = sources/main.c sources/functions.c sources/ft_calloc.c sources/push.c sources/swap.c sources/reverse_rotate.c sources/rotate.c \
		sources/printf_utils.c sources/printf_utils_two.c sources/ft_printf.c sources/sort.c \
		sources/sort_five_numbers.c sources/sort_four_numbers.c sources/sort_three_numbers.c \
		sources/sort_almost_all.c sources/pass_a.c sources/chuck_sort.c sources/sort_almost_all_2.c sources/checker.c \
		sources/ft_isdigit.c

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g
AR = ar rcs

SRC_OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJS)
		@$(CC) $(CFLAGS) $(SRC_OBJS) -o push_swap

c:
		@$(RM) $(SRC_OBJS)


f: c
		@$(RM) $(NAME)

r: f all
