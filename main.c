/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:53:01 by caalbert          #+#    #+#             */
/*   Updated: 2022/07/15 16:23:34 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	main(int argc, char *argv[])
{
	char *arg_error;
	char *arg_error2;

	arg_error = "You must to input at lest one parameter.";
	arg_error2 = "You must declare at least one value as a parameter for the software";
	if (argc <= 1)
		return (1);
	// if (argv > 1)
		// return (1);
	else
		return (0);
	return (0);

}