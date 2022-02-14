/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:05:55 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/14 18:55:10 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FALSE 0
#define TRUE 1

int	ft_is_prime(int nb)
{
	int	counter;

	if (nb < 1 || nb % 2 == 0)
		return (FALSE);
	if (nb <= 2)
		return (TRUE);
	counter = 2;
	while (counter * counter < nb)
	{
		if ((nb % counter++) == 0)
			return (FALSE);
	}
	return (TRUE);
}
