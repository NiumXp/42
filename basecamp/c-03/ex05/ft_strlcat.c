/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 08:27:00 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/12 04:37:31 by nximenes         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src, t_uint8 count)
{
	char	*tmp;
	char	*s;

	s = src;
	tmp = dest;
	while (count--)
		*tmp++ = *s++;
	return (dest);
}

t_uint8	ft_strlcat(char *dest, char *src, unsigned int size)
{
	t_uint8	dsize;
	t_uint8	len;
	t_uint8	res;

	dsize = ft_strlen(dest);
	len = ft_strlen(src);
	res = dsize + len;
	dest += dsize;
	size -= dsize;
	if (len >= size)
		len = size - 1;
	ft_strcpy(dest, src, len);
	dest[len] = 0;
	return (res);
}
