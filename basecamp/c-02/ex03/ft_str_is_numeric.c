/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:51:52 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/06 23:51:55 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!ft_is_numeric(*str++))
			return (0);
	}
	return (1);
}
