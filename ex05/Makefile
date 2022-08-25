CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= main.c operations.c ft_numberhandling.c
NAME	= do-op 

all: ${NAME}

${NAME}:
	$(CC) $(CFLAGS) ${SRCS} -o ${NAME}

clean:

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
