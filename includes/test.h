/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 20:26:40 by caalbert          #+#    #+#             */
/*   Updated: 2022/07/22 20:32:18 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef TEST_H
# define TEST_H

char	*ft_strchr(const char *s, int c)
{
	c = (unsigned char)c;
	while (*s && c != *s)
		s++;
	if (*s == '\0' && c != '\0')
		return (NULL);
	return ((char *)s);
}

void	convert_lts_to_str(char *s, int strlen, char *str)
{
	t_list	*tmp;
	char	*content;
	int		i;

	i = 0;
	while (i < strlen)
	{
		tmp = buffer_lists[0];
		content = (char *)tmp->line;
		while (*content != 0 && i < strlen)
		{
			str[i] = *content;
			content++;
			i++;
		}
		if (*content != 0)
			buffer_lists[0]->next = ft_lstnew(ft_strdup(content));
		buffer_lists[0] = buffer_lists[0]->next;
		free_mem((void **)&tmp->line);
		free_mem((void **)&tmp);
	}
}