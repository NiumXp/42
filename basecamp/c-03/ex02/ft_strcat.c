/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:25:02 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/08 08:26:04 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	steps;

	steps = 0;
	while (*dest++)
		++steps;
	while (*src)
	{
		*dest++ = *src++;
		++steps;
	}
	*dest = '\0';
	return (dest - steps);
}
