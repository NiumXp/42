/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 05:13:54 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/17 19:46:33 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			index;
	t_stock_str	*strs;

	strs = NULL;
	if (ac < 1)
		return (strs);
	index = 0;
	strs = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (strs == NULL)
		return (strs);
	while (index < ac)
	{
		strs[index].size = ft_strsize(av[index]) - 1;
		strs[index].copy = ft_strdup(av[index]);
		strs[index].str = av[index];
		++index;
	}
	strs[index] = (t_stock_str){0, 0, 0};
	return (strs);
}
