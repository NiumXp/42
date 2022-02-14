/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:19:08 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/13 23:48:13 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_watchers	ft_getwatchers(t_uint *vector, t_uint y)
{
	t_watchers	watchers;
	t_uint		temp;

	temp = (2 * DIMENSION) + y;
	watchers.left = vector[temp];
	watchers.right = vector[temp + DIMENSION];
	return (watchers);
}

t_bool	ft_is_valid_solution(t_uint **matrix, t_uint *vector)
{
	t_watchers	watchers;
	t_uint		row;
	// t_uint		col;

	row = 0;
	// col = 0;
	while (row < ROWS)
	{
		watchers = ft_getwatchers(vector, row);
		if (!ft_is_valid_line(watchers, matrix[row]))
			break ;
	}
	return (FALSE);
}

int	ft_index(t_uint element, t_uint *seq, t_uint size)
{
	int	index;

	index = -1;
	while (size-- != 0)
	{
		if (seq[size] == element)
			return (index + 1);
		++index;
	}
	return (index);
}

t_uint	*ft_get_options(t_uint **matrix, t_uint x, t_uint y)
{
	t_uint	*options;
	t_uint	*numbers;
	int		index;
	t_uint	col;
	t_uint	row;

	col = 0;
	numbers = matrix[y];
	options = (t_uint *)malloc(sizeof(t_uint) * DIMENSION);
	while (col < COLS)
	{
		index = ft_index(numbers[col], options, ROWS);
		if (index != -1)
			options[index] = 0;
		++col;
	}
	row = 0;
	while (row < ROWS)
	{
		index = ft_index(matrix[row][x], options, ROWS);
		if (index != -1)
			options[index] = 0;
		++row;
	}
	return (options);
}

#include <stdio.h>

t_bool	ft_backtracking(
	t_uint **matrix,
	t_uint *vector,
	t_uint column,
	t_uint line
)
{
	t_watchers	watchers;
	t_uint		*options;
	t_uint		option;
	t_uint		index;
	t_bool		is_valid;

	index = 0;
	options = ft_get_options(matrix, column, line);
	while (index < DIMENSION)
	{
		option = options[index++];
		if (option == 0)
			continue ;
		watchers = ft_getwatchers(vector, column);
		if (!ft_is_valid_line(watchers, matrix[index - 1]))
			break ;
		matrix[line][column] = option;
		if ((line + column) == (DIMENSION * 2 - 2))
			return (ft_is_valid_solution(matrix, vector));
		if (column == (DIMENSION - 1))
			is_valid = ft_backtracking(matrix, vector, 0, line + 1);
		else
			is_valid = ft_backtracking(matrix, vector, column + 1, line);
		if (is_valid)
			return (is_valid);
	}
	return (FALSE);
}
