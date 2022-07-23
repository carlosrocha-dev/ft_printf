/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:53:01 by caalbert          #+#    #+#             */
/*   Updated: 2022/07/23 00:46:40 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"
// #include "includes/test.h"

/*
Flags:
	original -> to compare with printf

*/

int	main(int argc, char *argv[])
{
	char *arg_error;
	char *arg_error2;
	char *flag;

	arg_error = "You must to input at lest one parameter.";
	arg_error2 = "You must declare at least one value as a parameter for the software";
	flag = argv[1];
	if (argc >= 1)
	{

		printf("entrou %s\n", argv[1]);//
		ft_putstr_fd(STDIN_FILENO, sizeof(argv[1]));
		// if (flag == "original")
		// {
			printf("Return argC: %d\n", argc);
			printf ("Characters: %c %c \n", 'a', 65);
			printf ("Decimals: %d %ld\n", 1977, 650000L);
			printf ("Preceding with blanks: %10d \n", 1977);
			printf ("Preceding with zeros: %010d \n", 1977);
			printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
			printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
			printf ("Width trick: %*d \n", 5, 10);
			printf ("%s \n", "A string");
		// }
	}
	else
		printf("return: %s\n", arg_error2);
	return (0);

}

