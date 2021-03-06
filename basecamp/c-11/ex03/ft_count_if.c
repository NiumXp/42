/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 07:18:59 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/20 21:43:11 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_uint;

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	t_uint	count;
	t_uint	index;

	count = 0;
	index = 0;
	while (index < length)
	{
		if (f(tab[index]) != 0)
			++count;
		++index;
	}
	return (count);
}
