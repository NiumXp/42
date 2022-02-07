/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:51:47 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/06 23:54:17 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_letter(char chr)
{
	return (('a' <= chr && chr <= 'z') || ('A' <= chr && chr <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!ft_is_letter(*str++))
			return (0);
	}
	return (1);
}
