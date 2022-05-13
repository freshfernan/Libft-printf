# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fefernan <fefernan@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 12:19:55 by fefernan          #+#    #+#              #
#    Updated: 2022/05/09 19:13:05 by fefernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c\
	  ft_putchar.c\
	  ft_puthexma.c\
	  ft_puthexmi.c\
	  ft_putint.c\
	  ft_putptr.c\
	  ft_putstr.c\
	  ft_putuint.c
			 
OBJS = $(SRC:.c=.o)

CC = gcc -Wall -Werror -Wextra

LIBC = ar rcs

RM = rm -f

%.o: %.c
	$(CC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $@ $^

#bonus: $(OBJS_BONUS)
#	$(LIBC) $(NAME) $^

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean bonus fclean re
