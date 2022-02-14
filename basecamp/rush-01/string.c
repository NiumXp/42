/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:56:12 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/13 20:47:09 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_uint	ft_strlen(char *str)
{
	t_uint	length;

	length = 0;
	while (*str++)
		++length;
	return (length);
}

/*
	Returns `TRUE` if `chr` is a digit in ASCII table.
*/
t_bool	ft_isdigit(char chr)
{
	return ('0' <= chr && chr <= '9');
}

/*
	Returns `TRUE` if `str` has a valid "vector" form in interval of
	['0', '9']. Note that interval is *inclusive*.

	A "vector" form is a string that in their odd positions has a space (` `);
	otherwise, is expected a digit in the interval of ['0', '9'].
*/
t_bool	ft_str_is_numeral(char *str)
{
	t_uint	index;
	char	letter;

	index = 0;
	while (*str)
	{
		letter = *str++;
		if (index++ % 2)
		{
			if (letter != ' ')
				return (FALSE);
			continue ;
		}
		if (!ft_isdigit(letter))
			return (FALSE);
	}
	return (TRUE);
}
