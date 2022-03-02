# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 22:29:31 by kkivi             #+#    #+#              #
#    Updated: 2022/03/02 23:24:58 by kkivi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
HEADER	=	libft.h
SRCS 	=	ft_memset.c		ft_bzero.c			ft_memcpy.c		\
			ft_striteri.c	ft_memmove.c		ft_memchr.c		\
			ft_memcmp.c		ft_strlen.c			\
			ft_strlcat.c	ft_strchr.c			\
			ft_strnstr.c	ft_strncmp.c		ft_atoi.c		\
			ft_isalpha.c	ft_isdigit.c		ft_isalnum.c	\
			ft_isascii.c	ft_isprint.c		ft_toupper.c	\
			ft_tolower.c	ft_calloc.c			ft_strdup.c		\
			ft_substr.c		ft_strlcpy.c		\
			ft_strjoin.c	ft_strtrim.c		ft_split.c		\
			ft_itoa.c		ft_strmapi.c		ft_putchar_fd.c	\
			ft_putstr_fd.c	ft_putendl_fd.c		ft_putnbr_fd.c	\
			ft_strrchr.c		
			

BONUS	=	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	\
			ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c	\
			ft_lstclear.c	ft_lstiter.c		ft_lstmap.c

OBJS	= $(SRCS:.c=.o)
BOBJS	= $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BOBJS)
	ar rcs $(NAME) $(BOBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BOBS)