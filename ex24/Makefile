SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJS = ${SRCS:.c=.o}

HEADER = ./includes/ft.h

NAME = libft.a

CC = gcc

LIBC = ar rc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:${OBJS} ${HEADER}
		${LIBC} ${NAME} ${OBJS} ${HEADER}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re