/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 02:25:35 by nximenes          #+#    #+#             */
/*   Updated: 2022/04/02 03:47:14 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>		// free(), NULL
#include "ft_list.h"

void	ft_list_remove_if(
	t_list **begin_list,
	void *data_ref,
	int (*cmp)(),
	void (*free_fct)(void *)
)
{
	t_list	*last;
	t_list	*list;
	t_list	*next;
	t_list	*head;

	last = NULL;
	head = NULL;
	list = *begin_list;
	while (list != NULL)
	{
		next = list->next;
		if ((*cmp)(list->data, data_ref))
		{
			if (last)
				last->next = next;
			else
				last = next;
			(*free_fct)(list->data);
			free(list);
		}
		else
		{
			last = list;
			if (head == NULL)
				head = list;
		}
		list = next;
	}
	*begin_list = head;
}
