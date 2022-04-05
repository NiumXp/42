/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:42:01 by nximenes          #+#    #+#             */
/*   Updated: 2022/04/05 19:45:21 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isprint(int c)
{
	return ((0x20 <= c) && (c <= 126));
}
