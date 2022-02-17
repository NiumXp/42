/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 07:08:31 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/17 07:18:08 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	ft_any(char **tab, int (*f)(char *))
{
	while (*tab != (void *)0)
	{
		if (f(*tab) != FALSE)
			return (TRUE);
	}
	return (FALSE);
}
