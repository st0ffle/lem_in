/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudemare <gudemare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:21:30 by gudemare          #+#    #+#             */
/*   Updated: 2018/02/20 22:31:23 by gudemare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <stdlib.h>
#include "libft.h"

void	ft_exit(char *message, int display_errno, int should_exit)
{
	if (message)
		ft_dprintf(2, "%s\n", message);
	if (display_errno)
		ft_dprintf(2, "Fatal error : %s\n", strerror(errno));
	if (should_exit)
		exit(EXIT_FAILURE);
}
