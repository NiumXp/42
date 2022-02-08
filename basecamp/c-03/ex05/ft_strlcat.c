/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 08:27:00 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/08 17:55:37 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (*str++)
		++length;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	length;
	int				number;

	index = 0;
	length = ft_strlen(dest);
	number = size - length;
	while (src[index] && number > 1)
	{
		dest[index + length] = src[index];
		++index;
		--number;
	}
	return (length + size - index);
}
