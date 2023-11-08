NAME = miniRT

CC = CC
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

HEADER	=	inc/minirt.h

L_DIR = libft
L_NAME = libft.a

SRCS = srcs/minirt/main.c \
srcs/err/err.c \
srcs/utils_libft/lib.c \

OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(HEADER)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: 
	make clean
	$(RM) $(NAME)

re: 
	make fclean 
	make all
	
.PHONY: all clean fclean re bonus

