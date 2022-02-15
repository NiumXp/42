/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:47:39 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/15 09:05:39 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

typedef unsigned int	t_uint;

char	*ft_bool_strchr(char *str, char chr)
{
	while (*str)
	{
		if (chr == *str)
			return (TRUE);
		++str;
	}
	return (FALSE);
}

t_uint	ft_splitcount(char *str, char *charset)
{
	t_uint	count;
	t_uint	index;

	if (!*charset || !*str)
		return (0);
	count = 0;
	while (*str)
	{
		index = 0;
		while (charset[index])
			if (ft_bool_strchr(str, charset[index]))
				++count;
		++str;
	}
}

char	*ft_emptystring(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 1);
	*str = '\0';
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	t_uint	splits;

	splits = ft_splitsize(str, charset);
	if (!splits)
		return (ft_emptystring());
	while (splits > 0)
	{

	}
}
