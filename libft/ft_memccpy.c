/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 23:31:38 by aquint            #+#    #+#             */
/*   Updated: 2017/10/04 12:28:11 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *tmpd;
	char *tmps;

	tmpd = dst;
	tmps = (char*)src;
	while (n > 0)
	{
		*tmpd = *tmps;
		if (*tmps == c)
		{
			tmpd++;
			return (tmpd);
		}
		tmpd++;
		tmps++;
		n--;
	}
	return (NULL);
}
