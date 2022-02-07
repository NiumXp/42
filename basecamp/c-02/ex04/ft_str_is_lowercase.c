/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:51:59 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/06 23:52:01 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_in_lowercase(char c)
{
	return ('a' <= c && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!ft_is_in_lowercase(*str++))
			return (0);
	}
	return (1);
}
