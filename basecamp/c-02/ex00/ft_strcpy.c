/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:51:26 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/06 23:53:48 by nximenes         ###   ########.fr       */
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
