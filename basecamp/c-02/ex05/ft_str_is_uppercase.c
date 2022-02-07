/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:52:07 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/06 23:52:09 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_in_uppercase(char c)
{
	return ('A' <= c && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!ft_is_in_uppercase(*str++))
			return (0);
	}
	return (1);
}
