/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:18:55 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/13 15:26:38 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*
	Puts a `char` in `FL_STDOUT`.
*/
void	ft_putchar(char chr)
{
	write(FL_STDOUT, &chr, sizeof(chr));
}

/*
	Puts a NULL-terminated string in `FL_STDOUT`.
*/
void	ft_putstr(char *str)
{
	write(FL_STDOUT, str, ft_strlen(str));
}

/*
	Puts `Error\\n` in `FL_STDOUT`.
*/
void	ft_puterror(void)
{
	ft_putstr("Error\n");
}
