NAME = libftprintf.a

FILES =	ft_printchar.c\
		ft_printnbr.c\
		ft_printptr.c\
		ft_printf.c\

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ) 
$(OBJ) : $(FILES)
	gcc $(FLAGS) -c $(FILES)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY : all re fclean clean