/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:25:19 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/08 17:52:59 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	steps;

	steps = 0;
	while (*dest)
	{
		++steps;
		++dest;
	}
	while (nb-- > 0 && *src)
	{
		*dest++ = *src++;
		++steps;
	}
	*dest = '\0';
	return (steps);
}
