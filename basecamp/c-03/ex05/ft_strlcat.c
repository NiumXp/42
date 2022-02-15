/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 08:27:00 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/15 10:30:55 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_uint8;

t_uint8	ft_strlen(char *str)
{
	t_uint8	length;

	length = 0;
	while (*str++)
		++length;
	return (length);
}

t_uint8	ft_strlcat(char *dest, char *src, unsigned int size)
{
	t_uint8	dsize;
	t_uint8	ssize;
	t_uint8	index;

	ssize = ft_strlen(src);
	if (size < 1)
		return (ssize);
	dsize = ft_strlen(dest);
	if (size < dsize)
		return (ssize + dsize);
	index = 0;
	while (src[index] && (index + dsize) < (size - 1))
	{
		dest[index + dsize] = src[index];
		index++;
	}
	dest[index + dsize] = 0;
	return (dsize + ssize);
}
