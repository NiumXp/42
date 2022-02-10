/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 03:47:12 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/10 04:27:38 by nximenes         ###   ########.fr       */
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
	while (--argc > 0)
		ft_putlstr(argv[argc]);
	return (0);
}
