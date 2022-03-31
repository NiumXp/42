/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 03:03:00 by nximenes          #+#    #+#             */
/*   Updated: 2022/03/30 03:11:49 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include "ft_list.h"

t_list	*ft_create_element(void *data)
{
	t_list	*list;

	list = malloc(sizeof(t_list) * 1);
	list->data = data;
	list->next = NULL;
	return (list);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*first;
	t_list	*list;
	int		index;

	if (!size)
		return (NULL);
	index = 0;
	first = ft_create_element((void *)strs[index++]);
	list = first;
	while (index < size)
		list = (list->next = ft_create_element((void *)strs[index++]));
	return (first);
}
