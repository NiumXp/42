/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 04:10:52 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/16 08:48:05 by nximenes         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
		return (0);
	if (*range == NULL)
		return (-1);
	return (max - min);
}
