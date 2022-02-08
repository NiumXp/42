/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:40:10 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/03 20:45:55 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	next;
	int	temp;

	index = 0;
	while (index < size)
	{
		next = index + 1;
		if (tab[index] > tab[next])
		{
			temp = tab[index];
			tab[index] = tab[next];
			tab[next] = temp;
			index = 0;
		}
		++index;
	}
}
