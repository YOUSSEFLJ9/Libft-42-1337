# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 08:58:01 by ymomen            #+#    #+#              #
#    Updated: 2023/11/10 18:55:11 by ymomen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  ft_putchar_fd.c ft_strmapi.c ft_atoi.c ft_putendl_fd.c ft_strncmp.c ft_bzero.c ft_putnbr_fd.c ft_strnstr.c ft_calloc.c ft_putstr_fd.c ft_strrchr.c ft_isalnum.c  ft_split.c ft_strtrim.c ft_isalpha.c ft_strchr.c ft_substr.c ft_isascii.c ft_strdup.c ft_tolower.c ft_isdigit.c ft_memchr.c ft_striteri.c ft_toupper.c ft_isprint.c ft_memcmp.c ft_strjoin.c ft_itoa.c ft_memcpy.c ft_strlcat.c ft_memmove.c ft_strlcpy.c ft_memset.c ft_strlen.c
SRB = ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c
OBJ = $(SRC:.c=.o)
BOB = $(SRB:.c=.o)
LIB = ar -rcs
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

%.o : %.c
	@$(CC) -c $(CFLAGS) $< -o $@

all: $(NAME)

$(NAME) : $(OBJ)
	@$(LIB) $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)
	
fclean: clean
	@$(RM) $(NAME)

re: fclean all

bonus: all ${BOB}
	@$(LIB) $(NAME) $(BOB)
	
.PHONY : clean fclean all bonus