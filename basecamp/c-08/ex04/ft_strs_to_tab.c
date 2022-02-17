/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 05:13:54 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/17 05:59:22 by nximenes         ###   ########.fr       */
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

void	*ft_free_strs(t_stock_str	*strs, t_uint size)
{
	while (size > 0)
	{
		free(strs[size].copy);
		free(&strs[size]);
	}
	free(strs);
	return (NULL);
}

t_stock_str	*ft_empty_stock(void)
{
	t_stock_str	*stock;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str));
	stock->str = 0;
	stock->size = 0;
	stock->copy = 0;
	return (stock);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strs;
	t_uint		index;
	t_stock_str	*str;

	if (ac < 1)
		return (NULL);
	index = 0;
	strs = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (strs == NULL)
		return (NULL);
	while (index < (t_uint)ac)
	{
		str = (t_stock_str *)malloc(sizeof(t_stock_str));
		if (str == NULL)
			return (ft_free_strs(strs, index));
		str->size = ft_strsize(av[index]) - 1;
		str->copy = ft_strdup(av[index]);
		str->str = av[index];
		strs[index] = *str;
		++index;
	}
	strs[index] = *ft_empty_stock();
	return (strs);
}
