NAME	= libft.a
HEAD	= libft.h
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc

AR      = ar rc
RANLIB  = ranlib

SRC		= *.c

OBJ		= $(SRC:.c=.o)

all: ${NAME}

${NAME}: 
		@${CC} ${CFLAGS} -c ${SRC}
		@${AR} ${NAME} ${OBJ}
		@${RANLIB} ${NAME}

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)


clean:
		@rm -f $(OBJ) 

fclean: clean
		@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re