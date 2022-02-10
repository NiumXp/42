/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 04:28:23 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/10 20:50:44 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_putlstr(char *str)
{
	while (*str)
		write(STDOUT, str++, 1);
	write(STDOUT, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	r;

	while (*s1 || *s2)
	{
		r = (*s2++ - *s1++);
		if (r < 0)
			return (1);
		if (r > 0)
			return (-1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	char	*ptr;
	int		index;

	index = 0;
	while (++index < argc - 1)
	{
		if (ft_strcmp(argv[index], argv[index + 1]) == 1)
		{
			ptr = argv[index];
			argv[index] = argv[index + 1];
			argv[index + 1] = ptr;
			index = 0;
		}
	}
	index = 0;
	while (++index < argc)
		ft_putlstr(argv[index]);
	return (0);
}
