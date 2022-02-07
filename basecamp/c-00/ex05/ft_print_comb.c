/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 04:28:27 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/07 00:22:41 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_print_comb(void)
{
	char	numbers[3];

	numbers[0] = '0';
	while (numbers[0] <= '7')
	{
		numbers[1] = numbers[0] + 1;
		while (numbers[1] <= '8')
		{
			numbers[2] = numbers[1] + 1;
			while (numbers[2] <= '9')
			{
				write(STDOUT, numbers, 3);
				if (numbers[0] != '7')
					write(STDOUT, ", ", 2);
				numbers[2]++;
			}
			numbers[1]++;
		}
		numbers[0]++;
	}
	return ;
}
