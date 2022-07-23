NAME		= libftprintf.a

CC_FLAGS	= -Wall -Wextra -Werror

LIBFT		= ./libft/libft.a

SRCS		= main.c

OBJS		= $(SRCS:.c=.o)

@all:		$(NAME)
				make clean

$(NAME): $(OBJS) $(LIBFT)
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

$(LIBFT):
		make -C ./libft

$(OBJS):
		cc $(CC_FLAGS) -I./includes -c $(addprefix ./files/,$(SRCS))

 clean:
			rm -f $(OBJS)

 fclean:	clean
 			# ./libft
			rm -f $(NAME)

 re:		all

git:
		@git status
		@git add .
		@git commit -m "backup commit."
		@git push

 .PHONY: all clean fclean re git
