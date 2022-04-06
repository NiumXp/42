/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:12:55 by nximenes          #+#    #+#             */
/*   Updated: 2022/04/06 20:16:23 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

int	strncmp(const char *lhs, const char *rhs, size_t count)
{
	if (!count)
		return (0);
	while (count && *lhs && (*lhs == *rhs))
	{
		++lhs;
		++rhs;
		--count;
	}
	return (lhs - rhs);
}
