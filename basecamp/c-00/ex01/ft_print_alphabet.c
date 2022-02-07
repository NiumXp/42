/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 04:28:27 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/07 18:37:43 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_print_alphabet(void)
{
	char	chr;

	chr = 'a';
	while (chr <= 'z')
	{
		write(STDOUT, &chr, 1);
		chr++;
	}
	return ;
}
