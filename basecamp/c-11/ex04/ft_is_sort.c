/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:44:57 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/21 06:30:58 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

typedef unsigned int	t_uint;

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	t_uint	index;
	int		right;

	index = 0;
	while (index < (length - 1))
	{
		right = tab[index + 1];
		if (f(tab[index], right) == -1)
			return (FALSE);
		++index;
	}
	return (TRUE);
}
