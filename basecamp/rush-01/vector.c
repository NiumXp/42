/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:32:35 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/13 20:57:13 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*
	Returns a free-able array of 16 `int`s. If `str` does not have a
	valid form of a "vector", the behavior is undetermined.

	The "vector" form is decribed in `ft_is_str_vector`.
*/
t_uint	*ft_split_str_vector(char *str)
{
	t_uint	*numbers;
	t_uint	counter;
	t_uint	index;
	char	chr;

	index = 0;
	counter = 0;
	numbers = malloc(sizeof(t_uint) * 16);
	while (str[index] != '\0')
	{
		chr = str[index];
		if (index++ % 2)
		{
			if (chr != ' ')
				break ;
			continue ;
		}
		if (!ft_isdigit(chr))
			break ;
		numbers[counter++] = (chr - '0');
	}
	return (numbers);
}

/*
	Returns the `line` of `vector`.

	This function does not create a new `t_uint` array with size `4`;
	it returns only an offset of `vector` based on `line`.
*/
t_uint	*ft_range_vector(t_uint *vector, t_uint line)
{
	return (vector + (line * DIMENSION));
}

/*
	Free the `vector`. Same than `free(vector)`.
*/
void	ft_free_vector(t_uint *vector)
{
	free(vector);
}
