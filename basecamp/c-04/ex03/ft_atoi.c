/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:27:44 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/16 15:32:43 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_digit(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_is_space(char c)
{
	return (c == ' ' || ('\t' <= c && c <= '\r'));
}

char	*ft_stripspace(char *str)
{
	while (ft_is_space(*str))
		str++;
	return (str);
}

int	ft_atoi(char *str)
{
	int	number;
	int	is_negative;

	number = 0;
	is_negative = 0;
	str = ft_stripspace(str);
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			is_negative = !is_negative;
	}
	while (ft_is_digit(*str))
	{
		number *= 10;
		if (is_negative)
			number -= (*str - '0');
		else
			number += (*str - '0');
		++str;
	}
	return (number);
}
