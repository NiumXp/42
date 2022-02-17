/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 07:02:33 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/17 07:11:57 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	index;
	int	*arr;

	if (length < 1)
		return ;
	index = 0;
	arr = (int *)malloc(sizeof(int) * length);
	while (index < length)
	{
		arr[index] = f(*tab++);
		++index;
	}
	return (arr);
}
