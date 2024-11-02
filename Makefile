NAME = libftprintf.a
SOURCES = ft_printf.c \
			ft_putcharInt.c \
			ft_putstrInt.c \
			ft_putnbrInt.c \
			ft_putnbrUn.c \
OBJECTS = $(SOURCES:.c=.o)                                                 

CC = cc                                                                      
CFLAGS = -Wall -Wextra -Werror
INCLUDE = libftprintf.h
RM = rm -rf                                                                     

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	
clean:
		$(RM) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re