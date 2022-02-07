<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 04:28:27 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/04 03:39:31 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
			return (n - 1);
		return (-n);
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	int	index;
	int	buffer[10];
	int	isloweless;

	if (nb == 0)
		return (ft_putchar('0'));
	index = 0;
	isloweless = (nb % 2147483648) == 0;
	if (nb < 0)
		ft_putchar('-');
	nb = ft_abs(nb);
	while (nb > 0)
	{
		buffer[index++] = '0' + (nb % 10) + isloweless;
		isloweless = 0;
		nb /= 10;
	}
	while (index-- > 0)
	{
		ft_putchar(buffer[index]);
	}
}
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 04:28:27 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/04 03:39:31 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
			return (n - 1);
		return (-n);
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	int	index;
	int	buffer[10];
	int	isloweless;

	if (nb == 0)
		return (ft_putchar('0'));
	index = 0;
	isloweless = (nb % 2147483648) == 0;
	if (nb < 0)
		ft_putchar('-');
	nb = ft_abs(nb);
	while (nb > 0)
	{
		buffer[index++] = '0' + (nb % 10) + isloweless;
		isloweless = 0;
		nb /= 10;
	}
	while (index-- > 0)
	{
		ft_putchar(buffer[index]);
	}
}
>>>>>>> eaa35b41c0256b74cb24bb05a2d0ba87996e0d46
