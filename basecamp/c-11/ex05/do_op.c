/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 06:41:38 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/21 06:54:37 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int argc, int *argv[])
{
	char	*message;

	if (argc == 1)
		return (SUCCESS);
	message = ft_parse(argc, argv);
	ft_putstr(message);
	return (SUCCESS);
}
