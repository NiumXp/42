/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 02:49:20 by nximenes          #+#    #+#             */
/*   Updated: 2022/03/30 02:56:32 by nximenes         ###   ########.fr       */
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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;
	t_list	*last;

	list = *begin_list;
	last = ft_create_element(data);
	if (list == NULL)
	{
		*begin_list = last;
		return ;
	}
	while (list->next)
		list = list->next;
	list->next = last;
}
