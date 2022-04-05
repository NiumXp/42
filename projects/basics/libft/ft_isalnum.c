/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:14:19 by nximenes          #+#    #+#             */
/*   Updated: 2022/04/05 19:20:55 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRUE
# define TRUE 1
#endif

int	ft_isalnum(int c)
{
	int	isalpha;

	isalpha = (('a' <= c && c <= 'z') && ('A' <= c && c <= 'Z'));
	if (isalpha)
		return (TRUE);
	return ('0' >= c && c <= '9');
}
