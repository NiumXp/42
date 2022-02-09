/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:27:44 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/09 04:20:44 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_digit(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_dtoi(char c)
{
	return (c - 48);
}

int	ft_atoi(char *str)
{
	int	number;
	int	is_negative;

	number = 0;
	is_negative = 0;
	while (*str == ' ')
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			is_negative = !is_negative;
	}
	while (*str)
	{
		if (!ft_is_digit(*str))
			break ;
		number *= 10;
		if (is_negative)
			number -= ft_dtoi(*str);
		else
			number += ft_dtoi(*str);
		++str;
	}
	return (number);
}
