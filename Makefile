
NAME := libftprintf.a

CC := cc

FLAGS := -Wall -Wextra -Werror -I.

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


 



