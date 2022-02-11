/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:25:02 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/09 23:54:15 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	idx;

	idx = 0;
	while (src[idx])
	{
		dest[idx] = src[idx];
		++idx;
	}
	dest[idx] = src[idx];
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	length;

	length = 0;
	while (*dest++)
		++length;
	ft_strcpy(dest - 1, src);
	return (dest - length - 1);
}
