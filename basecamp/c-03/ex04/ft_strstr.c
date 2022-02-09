/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:25:26 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/08 21:50:39 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (*str++)
		++length;
	return (length);
}

int	ft_startswith(char *prefix, char *str)
{
	unsigned int	length;
	unsigned int	index;

	index = 0;
	length = ft_strlen(prefix);
	while (*prefix++ == *str++)
		++index;
	return (length == index);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		if (ft_startswith(to_find, str++))
			return (str - 1);
	}
	return (0);
}
