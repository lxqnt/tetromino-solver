/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 19:58:11 by aquint            #+#    #+#             */
/*   Updated: 2017/10/04 14:27:04 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**ar;
	int		i;
	int		w;
	int		l;

	i = 0;
	w = 0;
	if (!s)
		return (NULL);
	if (!(ar = (char**)ft_memalloc(sizeof(*ar) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		if ((s[i] != c) && ((s[i - 1] == c) || (i == 0)))
		{
			l = ft_strcount(&s[i], c);
		//	if (!(ar[w] = (char*)ft_memalloc(sizeof(char) * l + 1)))
			if (!(ar[w] = (char*)ft_strnew(l + 1)))
				return (NULL);
			ft_strncpy(ar[w], &s[i], l);
			i = i + l - 1;
			w++;
		//	ar[w++][l] = '\0';
		}
		i++;
	}
	return (ar);
}
