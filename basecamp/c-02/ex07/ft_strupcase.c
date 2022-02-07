/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:52:28 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/06 23:54:38 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	chr;
	int		idx;

	idx = 0;
	while (str[idx])
	{
		chr = str[idx];
		if (chr >= 'a' && chr <= 'z')
			str[idx] = chr - 32;
		++idx;
	}
	return (str);
}
