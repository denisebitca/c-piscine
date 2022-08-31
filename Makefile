SRCS		=	src/file_read/file_to_string.c \
				src/libft/ft_str_put.c \
				src/libft/ft_str_inspect.c \
				src/map_handling/atoin.c \
				src/map_handling/fill_int_tab_helper.c \
				src/map_handling/map_parser.c \
				src/map_handling/map_printer.c \
				src/map_handling/splitter.c \
				src/map_handling/check_dupes.c \
				src/map_handling/count_newlines.c \
				src/find_square/find_square.c

OBJS		= ${SRCS:.c=.o}

INCLUDEDIRS	= ./

NAME		= bsq

CC			= gcc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

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