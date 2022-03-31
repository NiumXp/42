/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 02:39:24 by nximenes          #+#    #+#             */
/*   Updated: 2022/03/30 02:57:44 by nximenes         ###   ########.fr       */
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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	list = ft_create_element(data);
	list->next = *begin_list;
	*begin_list = list;
}
