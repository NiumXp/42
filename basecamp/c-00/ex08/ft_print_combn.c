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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_allzero(char *arr, unsigned int size)
{
	while (size--)
	{
		*arr++ = '\0';
	}
}

void	ft_putstr(char *c)
{
	while (*c)
		write(1, c++, 1);
}

#include <stdio.h>
void	ft_print_combn(int n)
{
	unsigned int	index;
	char				left;
	char			buff[10];

	index = 0;
	ft_allzero(buff, n + 5);
	while (index < 10)
	{
		if (index == 0)
			left = '9';
		else
			left = buff[index + 1];

		while (buff[index] < left)
		{
			ft_putstr(buff);
			ft_putchar(' ');
			buff[index]++;
		}
		buff[index] = left + 1;
		++index;
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
