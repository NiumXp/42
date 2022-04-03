/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 02:08:13 by nximenes          #+#    #+#             */
/*   Updated: 2022/04/03 03:52:24 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <sys/types.h>
#include <malloc.h>			// NULL

uint	ft_list_size(t_list	*list)
{
	uint	size;

	size = 0;
	while (list != NULL)
	{
		list = list->next;
		++size;
	}
	return (size);
}

t_list	*ft_list_at(t_list *begin_list, uint nbr)
{
	while (begin_list != NULL && nbr-- != 0)
		begin_list = begin_list->next;
	return (begin_list);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	uint	offset;
	t_list	*head;
	t_list	*tail;
	void	*temp;

	offset = ft_list_size(begin_list);
	offset = (offset / 2) + (offset % 2);
	if (offset < 1)
		return ;
	head = begin_list;
	tail = ft_list_at(head, offset);
	while (offset--)
	{
		temp = tail->data;
		tail->data = head->data;
		head->data = temp;
		head = head->next;
		tail = tail->next;
	}
}
