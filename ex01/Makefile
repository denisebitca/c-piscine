C	= gcc
CFLAGS	=  -Wall -Wextra -Werror
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
RM	= rm -f

${LIBNAME}:
		$C ${CFLAGS} -c ${INCLUDES} ${SRCS}
		mv *.o ${SRCSDIR}
		ar rc ${LIBNAME} ${OBJS}
		ranlib ${LIBNAME}

all:	${LIBNAME}

clean:
		${RM} ${INCLUDEOBJS}
		${RM} ${OBJS}

fclean:	clean
		${RM} ${LIBNAME}

re:		fclean all
