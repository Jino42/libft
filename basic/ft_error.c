/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 18:14:22 by ntoniolo          #+#    #+#             */
/*   Updated: 2018/07/06 12:59:48 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_error(char *string, bool (*func)(void *gen), void *gen)
{
	if (string)
		ft_putstr(string);
	if (func)
		return (func(gen));
	return (false);
}
