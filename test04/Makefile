C :=gcc
CFLAGS :=-Wall -Wextra -Werror -lbsd
SRC :=$(wildcard *.c)
EXE :=$(SRC:.c=)
EXNUM :=04

.SILENT:

all:$(EXE)

$(EXE):$(SRC)
	$C $@.c $(CFLAGS) -o $@.test
	./$@.test
	rm -rf ./$@.test
	echo "Norminette says:\n"
	norminette -R CheckForbiddenSourceHeader ../$(EXNUM)/ex$@
	echo "\n"

runNorminette:
	norminette -R CheckForbiddenSourceHeader ../$(EXNUM)
