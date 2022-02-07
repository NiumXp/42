/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:52:54 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/06 23:52:55 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (index < size && src[index])
	{
		dest[index] = src[index];
		++index;
	}
	dest[--index] = '\0';
	while (src[index])
		index++;
	return (index);
}
