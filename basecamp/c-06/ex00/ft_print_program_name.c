/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 03:04:36 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/10 03:06:53 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_putlstr(char *str)
{
	while (*str)
		write(STDOUT, str++, 1);
	write(STDOUT, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
		ft_putlstr(argv[0]);
	return (0);
}
