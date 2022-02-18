/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 04:10:52 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/18 07:03:28 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	index;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(**range) * (max - min));
	if (*range == NULL)
		return (-1);
	index = 0;
	while (min < max)
		(*range)[index++] = min++;
	return (index);
}

/*
int	main(void)
{
	int	**range;
	int	*ptr;

	range = &ptr;
	printf("%d\n", ft_ultimate_range(range, 3, 5));
	printf("%d ", (*range)[0]);
	printf("%d\n", (*range)[1]);
	return (0);
}
*/
