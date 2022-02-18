/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:12:57 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/18 06:34:37 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	index;

	range = NULL;
	if (min >= max)
		return (range);
	index = 0;
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (range);
	while (min < max)
		range[index++] = min++;
	return (range);
}

/*
int	main(void)
{
	int	*range;

	range = ft_range(3, 5);
	printf("%d ", range[0]);
	printf("%d\n", range[1]);
	printf("%p\n", ft_range(5, 3));
	return (0);
}
*/
