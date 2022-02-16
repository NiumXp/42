/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:12:57 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/15 14:56:50 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	index;
	int	size;

	if (min >= max)
		return (NULL);
	index = 0;
	size = (max - min);
	range = (int *)malloc(sizeof(int) * size);
	while (index < size)
		range[index++] = min++;
	return (range);
}
