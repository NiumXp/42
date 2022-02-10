/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:25:26 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/09 20:41:51 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	r;

	while (n > 0 && (*s1 || *s2))
	{
		r = (*s1++ - *s2++);
		if (r)
			return (r);
		--n;
	}
	return (0);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (*str++)
		++length;
	return (length);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	length;

	length = ft_strlen(to_find);
	while (*str)
	{
		if (*to_find == *str && !ft_strncmp(to_find, str, length))
			return (str);
		++str;
	}
	return (0);
}
