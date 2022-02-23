/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 07:38:06 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/23 07:38:07 by nximenes         ###   ########.fr       */
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
