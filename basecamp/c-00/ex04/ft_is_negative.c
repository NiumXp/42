/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 04:28:27 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/03 22:24:15 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_is_negative(int n)
{
	char	letter;

	letter = 'N' * (n < 0) + 'P' * (n >= 0);
	write(STDOUT, &letter, 1);
}


void	ft_is_negative(void);
