/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:40:34 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/13 21:18:47 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int argc, char *argv[])
{
	t_uint	**matrix;
	t_uint	*vector;

	if (argc != 2 || !ft_str_is_numeral(argv[1]))
	{
		ft_puterror();
		return (0);
	}
	vector = ft_split_str_vector(argv[1]);
	matrix = ft_create_matrix();
	ft_fill_matrix(matrix);
	if (!ft_solve_matrix(matrix, vector))
		ft_puterror();
	else
		ft_print_matrix(matrix);
	ft_free_vector(vector);
	ft_free_matrix(matrix);
	return (0);
}
