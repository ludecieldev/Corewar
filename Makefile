##
## EPITECH PROJECT, 2024
## B_PSU_200_LIL_2_1_minishell1_enzo_dubeaurepaire
## File description:
## Makefile
##

SRC	=	src/op.c \
		src/main.c \
		src/parsing/parsing.c \
		src/parsing/setup_corewar.c \
		src/arguments/get_args.c \
		src/instructions/add_sub.c \
		src/instructions/aff.c \
		src/instructions/and_or_xor.c \
		src/instructions/fork.c \
		src/instructions/ld.c \
		src/instructions/ldi.c \
		src/instructions/live.c \
		src/instructions/st.c \
		src/instructions/sti.c \
		src/instructions/zjmp.c \
		src/corewar_loop/check_win.c \
		src/corewar_loop/corewar_loop.c \
		src/corewar_loop/get_adress.c \

OBJ	=	$(SRC:.c=.o)

#CFLAGS	+=	-Wall -Wextra -Werror
CFLAGS	+=	-Ofast -fno-builtin -fno-builtin-memset -flto -march=native -g

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
