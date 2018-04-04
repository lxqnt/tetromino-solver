/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 20:41:23 by aquint            #+#    #+#             */
/*   Updated: 2017/10/04 12:38:14 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char *str;

	str = (char*)ft_memalloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str != NULL)
	{
		return (ft_strcpy(str, s1));
	}
	else
		return (NULL);
}
