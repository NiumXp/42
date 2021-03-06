/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 04:16:44 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/18 07:20:58 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>

typedef unsigned int	t_uint;

char	*ft_empty_str(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char));
	*str = '\0';
	return (str);
}

t_uint	ft_strlen(char *str)
{
	t_uint	length;

	length = 0;
	while (*str++)
		++length;
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	t_uint	idx;

	idx = 0;
	while (src[idx])
	{
		dest[idx] = src[idx];
		++idx;
	}
	dest[idx] = src[idx];
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	t_uint	length;

	length = 0;
	while (*dest++)
		++length;
	ft_strcpy(dest - 1, src);
	return (dest - length - 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	t_uint	lengths;
	char	*string;
	int		index;

	if (!size)
		return (ft_empty_str());
	index = 0;
	lengths = 0;
	while (index < size)
		lengths += ft_strlen(strs[index++]);
	lengths += ((size - 1) * ft_strlen(sep));
	string = (char *)malloc(lengths + 1);
	if (string == NULL)
		return (NULL);
	index = 0;
	string[0] = '\0';
	while (index < size)
	{
		if (index != 0)
			ft_strcat(string, sep);
		ft_strcat(string, strs[index]);
		++index;
	}
	return (string);
}

/*
int	main(void)
{
	char	*s[] = { "Naaaathan", "aloow" };
	char	*sep = { " , " };
	char	*dest;

	dest = ft_strjoin(3, s, sep);
	printf("%s\n", dest);
	free(dest);
	return (0);
}
*/
