# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: femonner <femonner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 11:44:46 by femonner          #+#    #+#              #
#    Updated: 2022/04/28 11:47:47 by femonner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= /bin/rm -f

NAME	= libftprintf.a

SRCS	= ft_putnbr.c ft_lowcase.c ft_upcase.c ft_printf.c \
		  ft_putchar.c ft_putstr.c ft_pntr.c \
		  ft_unsdec.c 

OBJS	= $(SRCS:.c=.o)


all:		$(NAME)

$(NAME):	$(OBJS)
			@ar -rcs $(NAME) $(OBJS)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all


.PHONY:		all clean fclean re
