/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:25:26 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/16 18:25:40 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_uint;

char	*ft_strstr(char *str, char *to_find)
{
	t_uint	index;
	t_uint	anchor;

	if (!*to_find)
		return (str);
	index = 0;
	while (str[index])
	{
		anchor = 0;
		while (str[index + anchor] == to_find[anchor])
		{
			if (to_find[anchor + 1] == '\0')
				return (&str[index]);
			++anchor;
		}
		++index;
	}
	return (0);
}
