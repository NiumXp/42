<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 04:28:27 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/07 18:38:11 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_print_reverse_alphabet(void)
{
	char	chr;

	chr = 'z';
	while (chr >= 'a')
	{
		write(STDOUT, &chr, 1);
		--chr;
	}
	return ;
}
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 04:28:27 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/07 18:38:11 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_print_reverse_alphabet(void)
{
	char	chr;

	chr = 'z';
	while (chr >= 'a')
	{
		write(STDOUT, &chr, 1);
		--chr;
	}
	return ;
}
>>>>>>> eaa35b41c0256b74cb24bb05a2d0ba87996e0d46
