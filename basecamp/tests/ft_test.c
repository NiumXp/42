/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:53:10 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/09 16:29:18 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef unsigned int	t_uint;
typedef unsigned char	t_bool;

t_bool	put_assert(t_bool b, char *str)
{
	printf("\033[");
	if (b)
		printf("32mOK");
	else
		printf("31mKO");
	printf("!\033[0m\t%s\n", str);
	return (b);
}

void	put_int_diff_line(int x, int y, char *op)
{
	printf("|\t%d \033[36m%s\033[0m %d\n", x, op, y);
}

void	put_int_lt(int x, int y)
{
	put_int_diff_line(x, y, ">");
}

void	put_int_gt(int x, int y)
{
	put_int_diff_line(x, y, "<");
}

void	put_int_eq(int x, int y)
{
	put_int_diff_line(x, y, "=");
}

void	put_int_diff(int x, int y)
{
	if (x < y)
		return (put_int_lt(x, y));
	if (x > y)
		return (put_int_gt(x, y));
	put_int_eq(x, y);
}

void	assert_int_eq(int x, int y, char *str)
{
	if (!put_assert(x == y, str))
		put_int_diff(x, y);
}
