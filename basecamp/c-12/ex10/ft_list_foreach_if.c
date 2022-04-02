/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 01:09:31 by nximenes          #+#    #+#             */
/*   Updated: 2022/04/02 02:10:11 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#define ZERO 0
#define NULL (void *)ZERO

void	ft_list_foreach_if(
	t_list	*begin_list,
	void (*f)(void	*),
	void *data_ref,
	int (*cmp)()
) {
	while (begin_list != NULL)
	{
		if ((*cmp)(begin_list->data, data_ref))
			(*f)(begin_list->data);
		begin_list = begin_list->data;
	}
}
