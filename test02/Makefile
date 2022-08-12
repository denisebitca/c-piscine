C :=gcc
CFLAGS :=-Wall -Wextra -Werror
SRC :=$(wildcard *.c)
EXE :=$(SRC:.c=)
EXNUM :=02

.SILENT:
all:$(EXE)
	echo "Norminette says:\n"
	norminette -R CheckForbiddenSourceHeader ../$(EXNUM)

$(EXE):$(SRC)
	$C $@.c $(CFLAGS) -o $@.test
	./$@.test
	rm -rf ./$@.test
