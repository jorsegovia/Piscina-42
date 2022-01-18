
NAME = Rush02

SRCS = main.c auxf/ft_array.c auxf/ft_atoi.c auxf/ft_number.c auxf/ft_print_dict.c auxf/ft_write.c

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean