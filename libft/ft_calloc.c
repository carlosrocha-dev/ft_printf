/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 21:49:52 by caalbert          #+#    #+#             */
/*   Updated: 2022/06/25 01:18:12 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	len;

	len = nmemb * size;
	if (size != len / nmemb)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = (void *) malloc(len);
	if (!mem)
		return (NULL);
	ft_bzero(mem, len);
	return (mem);
}
