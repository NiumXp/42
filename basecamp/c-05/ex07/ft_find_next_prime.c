/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:57:07 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/17 06:32:29 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FALSE 0
#define TRUE 1

int	ft_is_prime(int nb)
{
	int	counter;

	if (nb == 2)
		return (TRUE);
	if (nb < 2 || nb % 2 == 0)
		return (FALSE);
	counter = 3;
	while (counter <= (nb / counter))
	{
		if ((nb % counter) == 0)
			return (FALSE);
		counter += 2;
	}
	return (TRUE);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	if (nb % 2 == 0)
		nb++;
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}
