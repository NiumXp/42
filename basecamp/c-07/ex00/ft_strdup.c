/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:34:56 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/14 02:12:13 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>

typedef unsigned int	t_uint;

t_uint	ft_strsize(char *str)
{
	t_uint	size;

	size = 0;
	while (str[size++])
		;
	return (size);
}

char	*ft_strdup(char *src)
{
	t_uint	size;
	t_uint	index;
	char	*ptr;

	index = 0;
	size = ft_strsize(src);
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	while (index < size)
	{
		ptr[index] = src[index];
		++index;
	}
	return (ptr);
}
