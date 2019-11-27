# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 17:26:05 by amunoz-p          #+#    #+#              #
#    Updated: 2019/11/27 17:17:20 by amunoz-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

SRCS		=	ft_atoi.c \
				ft_count_digits.c \
				ft_count_digitshexa.c \
				ft_count_digitspoint.c \
				ft_hexad_low.c \
				ft_hexad_upper.c \
				ft_isdigit.c \
				ft_itoa.c \
				ft_itoa_unsigned.c \
				ft_or_case.c \
				ft_pointer.c \
				ft_print_array.c \
				ft_print_char.c \
				ft_print_hexa.c \
				ft_print_hexa_null.c \
				ft_print_nb.c \
				ft_print_null_case_char.c \
				ft_print_pointer.c \
				ft_print_pointer_null.c \
				ft_print_unsigned.c \
				ft_printf.c \
				ft_putchar.c \
				ft_read_special.c \
				ft_reset_struct.c \
				ft_set_zero.c \
				ft_strchr.c \
				ft_strlen.c \
				ft_while.c \
				ft_substr_bonus.c \

GCC			=	@gcc -Wall -Wextra -Werror

OBJS		=	$(SRCS:.c=.o)


INCLUDES	=	./

all: $(NAME)

$(NAME):	$(SRCS) printf.h
		$(GCC) -I$(INCLUDES) -c $(SRCS)
		-@ar rc $(NAME) $(OBJS)
		-@ranlib $(NAME)
clean:
			-@$(RM) $(OBJS)
fclean:     clean
			-@$(RM) $(NAME)
re:			fclean all

.PHONY:		all clean fclean