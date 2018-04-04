/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 00:46:21 by aquint            #+#    #+#             */
/*   Updated: 2017/09/05 23:59:10 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putarray(char **ar)
{
	int i;

	i = 0;
	while (ar[i] != '\0')
	{
		ft_putstr(ar[i]);
		ft_putchar('\n');
		i++;
	}
}