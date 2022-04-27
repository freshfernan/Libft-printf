# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fefernan <fefernan@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 12:19:55 by fefernan          #+#    #+#              #
#    Updated: 2022/04/27 11:36:35 by fefernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_printf.a

SRCS	= ft_printf.c ft_putchar.c ft_putstr.c

CC		= gcc -Werror -Wall -Wextra

LIBC	= ar rcs

RM		= /bin/rm -f

OBJS	= $(SRCS:%.c=%)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(LIBC) $@ $^

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean rE
