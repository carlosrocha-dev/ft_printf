/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 01:43:44 by caalbert          #+#    #+#             */
/*   Updated: 2022/06/25 02:54:25 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	i;

	dst = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (*s)
		dst[i++] = *s++;
	dst[i] = '\0';
	return (dst);
}
