/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 08:27:00 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/16 16:53:23 by nximenes         ###   ########.fr       */
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

t_uint8	ft_strlcat(char *dest, char *src, t_uint8 size)
{
	t_uint8	i;
	t_uint8	len_dest;
	t_uint8	len_source;

	i = 0;
	len_dest = ft_strlen(dest);
	len_source = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_source);
	while (((len_dest + i) < (size - 1)) && src[i])
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_source);
}
