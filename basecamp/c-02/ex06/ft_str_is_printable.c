/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:52:16 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/06 23:52:19 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_printable(char c)
{
	return (' ' <= c && c <= '~');
}

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_is_printable(*str++))
			return (0);
	}
	return (1);
}
