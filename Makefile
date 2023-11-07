SRC = ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strdup.c ft_itoa.c ft_striteri.c ft_putchar_fd.c ft_strmapi.c ft_bzero.c ft_strtrim.c ft_split.c ft_strjoin.c ft_substr.c ft_isalnum.c ft_strrchr.c ft_memcmp.c ft_strnstr.c ft_isalpha.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_atoi.c
BSRC = ft_lstnew.c ft_lstmap.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c 
OBJS = ${SRC:.c=.o}
BOBJS = ${BSRC:.c=.o} 
LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror -g
CC = cc
INCS = .
RM = rm -f
NAME = libft.a
SO = libt.so

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ) 

all: ${NAME}

clean:
	@${RM} *.o
bonus: ${BOBJS}
		${LIBC} ${NAME} ${BOBJS}
fclean: clean
		${RM} ${NAME} ${SO}

re: fclean all