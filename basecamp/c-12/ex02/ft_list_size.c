/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 02:43:43 by nximenes          #+#    #+#             */
/*   Updated: 2022/04/03 04:49:56 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>		// NULL
#include "ft_list.h"

int	ft_list_size(t_list	*begin_list)
{
	int	size;

	size = 0;
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		++size;
	}
	return (size);
}
