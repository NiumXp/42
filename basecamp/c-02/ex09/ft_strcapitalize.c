/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:52:46 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/06 23:52:50 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_letter(char chr)
{
	return (('a' <= chr && chr <= 'z') || ('A' <= chr && chr <= 'Z'));
}

int	ft_is_alnum(char chr)
{
	return (ft_is_letter(chr) || ('0' <= chr && chr <= '9'));
}

int	ft_to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	ft_to_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	char	last;
	char	chr;
	int		idx;

	idx = 0;
	last = ' ';
	while (str[idx])
	{
		chr = str[idx];
		if (!ft_is_alnum(last))
			str[idx] = ft_to_uppercase(chr);
		else
			str[idx] = ft_to_lowercase(chr);
		last = chr;
		++idx;
	}
	return (str);
}
