/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:52:39 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/06 23:54:25 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	chr;
	int		idx;

	idx = 0;
	while (str[idx])
	{
		chr = str[idx];
		if ('A' <= chr && chr <= 'Z')
			str[idx] = chr + 32;
		++idx;
	}
	return (str);
}
