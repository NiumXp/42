/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:41:49 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/03 17:02:05 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index;
	int	rigth;

	if (size < 0)
		size *= -1;
	index = 0;
	while (index < size / 2)
	{
		temp = tab[index];
		rigth = (size - 1) - index;
		tab[index] = tab[rigth];
		tab[rigth] = temp;
		++index;
	}
}
