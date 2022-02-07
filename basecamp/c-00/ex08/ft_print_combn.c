/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 06:11:31 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/07 18:33:56 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	math_power(int n, int b)
{
	int	ref;

	if (b == 0)
		return (1);
	ref = n;
	while ((--b) > 0)
	{
		n *= ref;
	}
	return (n);
}

int	reverse(int n)
{
	int	rev;

	rev = 0;
	while (n != 0)
	{
		rev *= 10;
		rev += n % 10;
		n /= 10;
	}
	return (rev);
}

int	is_repeated(int n, int max)
{
	if (n > 10 && (reverse(n) == n || n % 10 == 0 || reverse(n) < n))
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int		max;
	int		num;
	int		pos;
	char	chr;
	int		unit;

	max = math_power(10, n) - 1;
	num = 0;
	while ((num++) < max)
	{
		pos = n;
		if (!is_repeated(num, max))
		{
			while ((pos--) > 0)
			{
				unit = num / math_power(10, pos) % 10;
				chr = (char)('0' + unit);
				ft_putchar(chr);
			}
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
