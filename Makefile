##
## EPITECH PROJECT, 2024
## B_PSU_200_LIL_2_1_minishell1_enzo_dubeaurepaire
## File description:
## Makefile
##

SRC	=	src/op.c \
		src/main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Wextra -Werror
CFLAGS	+=	-Ofast -fno-builtin -fno-builtin-memset -flto -march=native

NAME	=	corewar

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/
	gcc -o $(NAME) $(OBJ) -Llib -lmy

tests_run:	$(OBJ)
	echo "No tests"
#	gcc -o unit_tests $(SRC) tests/test.c -lcriterion --coverage
#	./unit_tests
#	gcovr --exclude tests/

clean:
	make -C lib/ clean
	rm -f $(OBJ)

fclean:	clean
	make -C lib/ fclean
	rm -f $(NAME)

re:	fclean all
