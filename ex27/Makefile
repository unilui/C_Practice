SRCS =		ft_putchar.c ft_putstr.c display_file.c main.c

OBJS =		${SRCS:.c=.o}

H_SRC =		display_file.h

NAME =		ft_display_file

CC =		gcc

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} ${H_SRC}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re