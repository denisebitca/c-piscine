C	= gcc
INCLUDEDIR		= ./includes
INCLUDEFILES	= ft.h
SRCSDIR	= ./srcs
SRCSFILES	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# Take all substrings seperated by a space that follow the pattern *.h/*.c 
# and append their directory to the start of the respective substrings
INCLUDES	= $(INCLUDEFILES:%.h=$(INCLUDEDIR)/%.h)
SRCS		= $(SRCSFILES:%.c=$(SRCSDIR)/%.c)
LIBNAME	= libft.a
OBJS	= ${SRCS:.c=.o}
INCLUDEOBJS = ${INCLUDES:.h=.h.gch}

all: ${LIBNAME}

${LIBNAME}:
	$C -Wall -Wextra -error -c ${INCLUDES} ${SRCS}
	mv *.o ${SRCSDIR}
	ar rc ${LIBNAME} ${OBJS}
	ranlib ${LIBNAME}

clean:
	rm ${INCLUDEOBJS}
	rm ${OBJS}

fclean:	clean
	rm ${LIBNAME}

re: fclean all
