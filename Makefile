NAME = libftprintf.a
LIBFT = libft.a

CC = gcc
FLAGS = -Wall -Werror -Wextra

PRINTF_HEADERS = -I includes/ft_printf.h
LIBFT_HEADERS = -I libft/includes

OBJECTS_DIRECTORY =	objects/
SOURCES_DIRECTORY =	sources/
LIBFT_DIRECTORY = libft/

SOURCES_LIST = 	printf.c \
				init.c \
				build.c \
				bundle.c \
				parse.c \
				display.c \
				parse_percent.c \
				parse_type.c \
				parse_flags.c \
				display_percent.c \
				display_int.c \
				tools_int.c \
				display_o.c \
				tools_o.c \
				display_u.c \
				display_x.c \
				display_capital_x.c \
				tools_x.c \
				display_c.c \
				display_s.c \
				display_p.c \
				tools_p.c \
				display_f.c \
				tools_f.c \
				tools.c \
				tools1.c				

OBJECTS_LIST = $(SOURCES_LIST:.c=.o)

OBJECTS = $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST))

all: $(OBJECTS_DIRECTORY) $(NAME)

$(OBJECTS_DIRECTORY):
		mkdir -p $(OBJECTS_DIRECTORY)

$(NAME): $(OBJECTS)
		make -C $(LIBFT_DIRECTORY)
		cp $(LIBFT_DIRECTORY)$(LIBFT) .
		mv $(LIBFT) $(NAME)
		ar rc $(NAME) $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST))
		ranlib $(NAME)

$(OBJECTS): $(SOURCES_LIST:%=$(SOURCES_DIRECTORY)%)
		$(MAKE) $(OBJECTS_LIST)

$(OBJECTS_LIST):
		$(CC) $(FLAGS) $(PRINTF_HEADERS) $(LIBFT_HEADERS) -c -o $(OBJECTS_DIRECTORY)$@ $(SOURCES_DIRECTORY)$(@:%.o=%.c)

clean:
		rm -rf $(OBJECTS_DIRECTORY)
		make clean -C $(LIBFT_DIRECTORY) 

fclean: clean
		rm -f $(NAME)
		rm -rf $(OBJECTS_DIRECTORY)
		make fclean -C $(LIBFT_DIRECTORY) 

re: fclean all

.PHONY: all clean fclean re