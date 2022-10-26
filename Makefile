
NAME := libftprintf.a

CC := cc

FLAGS := -Wall -Wextra -Werror

SRC :=	ft_printf.c \
		ft_strlen.c \
		convert_base.c 
	


OBJ := $(SRC:.c=.o)

RM = rm -f

all: $(NAME)

%.o: %.c 
	gcc $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
		ar -rc $(NAME) $(OBJ)


clean: 
	${RM} ${OBJ}

fclean: clean
	${RM} $(NAME)

re: fclean all

.PHONY: all clean fclean re

 



