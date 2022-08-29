SRCS		=	src/file_read/file_to_string.c \
				src/file_read/file_exploration.c \
				src/libft/ft_str_put.c \
				src/libft/ft_str_copies.c \
				src/libft/ft_str_inspect.c \

OBJS		= ${SRCS:.c=.o}

INCLUDEDIRS	= ./

NAME		= bsq

CC			= gcc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -g3

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -I${INCLUDEDIRS} src/main.c -o ${NAME} ${OBJS}

.c.o:
			${CC} ${CFLAGS} -I${INCLUDEDIRS} -c $< -o ${<:.c=.o}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re