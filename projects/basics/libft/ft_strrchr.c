/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:04:11 by nximenes          #+#    #+#             */
/*   Updated: 2022/05/29 14:22:59 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  // ft_strlen, NULL

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s + ft_strlen(s);
	while (ptr != s && *ptr != c)
		--ptr;
	if (*ptr == c)
		return (ptr);
	return (NULL);
}
