/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:55:20 by nximenes          #+#    #+#             */
/*   Updated: 2022/05/29 14:03:15 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  // NULL

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		++s;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
