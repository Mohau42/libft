Name = Libft.a
Flags = -Wall -Werror -Wextra
CC = gcc
SRC = *.c
OBJ = *.o
AR = ar ac

all:
	$(CC) $(Flags) -c $(SRC)
	$(AR) $(Name) $(OBJ)
	ranlib Libft.a

clean:
	rm  *.o

fclean:
	rm $(NAme)

re: fclean all
