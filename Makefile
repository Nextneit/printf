NAME: libftprintf.a

FILES:	ft_printchar.c\
		ft_printstr.c\
		ft_printdec.c\
		ft_printhexa.c\
		ft_printptr.c\
		ft_printunsigned.c\
		ft_printf.c\

OBJ: $(FILES:.c=.o)

FLAGS: -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS) 
$(OBJS) : $(FILES)
	gcc $(FLAGS) -c $(FILES)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY : all re fclean clean bonus