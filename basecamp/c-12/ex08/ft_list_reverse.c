/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 03:21:44 by nximenes          #+#    #+#             */
/*   Updated: 2022/03/30 04:07:25 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*last;
	t_list	*temp;

	last = *begin_list;
	list = last->next;
	if (list == NULL)
		return ;
	last->next = NULL;
	while (list->next)
	{
		temp = list->next;
		last = list;
		list->next = temp;
	}
}
