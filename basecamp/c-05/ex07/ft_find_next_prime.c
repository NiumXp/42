/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:57:07 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/14 20:08:47 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FALSE 0
#define TRUE 1
#define MAX_INT_PRIME 2147395600

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

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb) && nb <= MAX_INT_PRIME)
		++nb;
	return (nb);
}
