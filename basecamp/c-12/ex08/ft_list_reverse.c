/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 03:21:44 by nximenes          #+#    #+#             */
/*   Updated: 2022/04/02 00:57:27 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#define ZERO 0
#define NULL (void *)ZERO

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*last;
	t_list	*temp;

	last = NULL;
	list = *begin_list;
	if (list == NULL)
		return ;
	while (list->next)
	{
		temp = list->next;
		list->next = last;
		last = list;
		list = temp;
	}
	list->next = last;
	*begin_list = list;
}
