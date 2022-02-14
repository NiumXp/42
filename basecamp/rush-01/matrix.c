/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:40:38 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/13 21:29:27 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*

*/
t_uint	**ft_create_matrix(void)
{
	t_uint	**matrix;
	t_uint	row;

	row = 0;
	matrix = (t_uint **)malloc(sizeof(t_uint *) * ROWS);
	while (row < ROWS)
		matrix[row++] = (t_uint *)malloc(sizeof(t_uint) * COLS);
	return (matrix);
}

void	ft_fill_matrix(t_uint **matrix)
{
	t_uint	row;
	t_uint	col;

	row = 0;
	while (row < ROWS)
	{
		col = 0;
		while (col < COLS)
			matrix[row][col++] = 0;
		++row;
	}
}

void	ft_print_matrix(t_uint **matrix)
{
	t_uint	row;
	t_uint	col;

	row = 0;
	while (row < ROWS)
	{
		col = 0;
		while (col < COLS)
		{
			ft_putchar(matrix[row][col] + '0');
			ft_putchar(' ');
			++col;
		}
		ft_putchar('\n');
		++row;
	}
}

void	ft_free_matrix(t_uint **matrix)
{
	t_uint	amount;

	amount = 4;
	while (amount-- > 0)
		free(matrix[amount]);
	free(matrix);
}

t_bool	ft_solve_matrix(t_uint **matrix, t_uint *vector)
{
	return (ft_backtracking(matrix, vector, 0, 0));
}
