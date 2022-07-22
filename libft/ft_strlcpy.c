/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:00:45 by caalbert          #+#    #+#             */
/*   Updated: 2022/06/26 17:16:24 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < size)
	{
		ft_memmove(dst, src, srclen + 1);
	}
	else if (size != 0)
	{
		ft_memmove(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (srclen);
}
