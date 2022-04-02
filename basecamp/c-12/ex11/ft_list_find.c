/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 02:18:56 by nximenes          #+#    #+#             */
/*   Updated: 2022/04/02 02:20:30 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#define ZERO 0
#define NULL (void *)ZERO

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	while (begin_list != NULL)
	{
		if ((*cmp)(begin_list->data, data_ref))
			return (begin_list);
		begin_list = begin_list->next;
	}
}
