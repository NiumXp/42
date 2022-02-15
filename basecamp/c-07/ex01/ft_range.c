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

int	ft_rsize(int x, int y)
{
	if (y < x)
		return (x - y);
	return (y - x);
}

int	*ft_range(int min, int max)
{
	int		*range;
	int		size;

	if (min >= max)
		return (NULL);
	size = ft_rsize(min, max);
	range = (int *)malloc(sizeof(int) * size);
	while (size-- > 0)
		range[size] = min++;
	return (range);
}

int	main(void)
{
	int	*ptr;

	ptr = 1;
	return (0);
}
