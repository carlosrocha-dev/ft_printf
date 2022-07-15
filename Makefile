NAME		= libftprintf.a

all:		$(NAME)

 clean:
			rm -f $(NAME)

 fclean:	clean
 			rm -f $(NAME)

 re:		fclean all

git:
		@git status
		@git add .
		@git commit -m "Automatic commit."
		@git push

 .PHONY: all clean fclean re git
