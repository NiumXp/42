/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 04:31:27 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/07 18:39:12 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_print_numbers(void)
{
	char	chr;

	chr = '0';
	while (chr <= '9')
	{
		write(STDOUT, &chr, 1);
		chr++;
	}
	return ;
}
