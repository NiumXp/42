/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:11:51 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/13 22:50:25 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_bool	ft_is_valid_left_line(t_watchers w, t_uint *line)
{
	t_uint	index;
	t_uint	count;
	t_uint	tallest;

	index = COLS;
	count = 0;
	tallest = 0;
	while (index < COLS)
	{
		if (line[index++] > tallest)
		{
			tallest = line[index - 1];
			++count;
		}
	}
	return (tallest == w.right);
}

t_bool	ft_is_valid_right_line(t_watchers w, t_uint *line)
{
	t_uint	index;
	t_uint	count;
	t_uint	tallest;

	index = COLS;
	count = 0;
	tallest = 0;
	while (--index < COLS)
	{
		if (line[index] > tallest)
		{
			tallest = line[index];
			++count;
		}
	}
	return (tallest == w.right);
}

t_bool	ft_is_valid_line(t_watchers w, t_uint *line)
{
	if (ft_is_valid_left_line(w, line))
		return (ft_is_valid_right_line(w, line));
	return (FALSE);
}
