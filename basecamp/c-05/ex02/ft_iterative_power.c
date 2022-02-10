/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:53:39 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/10 18:21:28 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ref;

	if (power == 0)
		return (1);
	ref = nb;
	while (power != 0)
	{
		nb *= ref;
		if (power > 0)
			--power;
		else
			++power;
	}
	return (nb);
}
