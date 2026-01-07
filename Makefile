NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = print_error_and_exit.c \
	parse_and_build_stack_from_string.c \
	parse_and_build_stack_from_arguments.c \
	is_number.c \
	push_swap.c \
	actions.c \
	actions1.c \
	utils.c \
	utils1.c \
	utils2.c \
	sort_two.c \
	sort_three.c \
	sort_four.c \
	sort_five.c \
	sort_small.c \
	radix_sort.c \
	sort_all.c \
	ft_split.c \
	free_split.c \
	arg_has_space.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS} 
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
