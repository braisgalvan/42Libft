/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 09:35:37 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/03/01 16:24:13 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		words;
	char	**array;
	int		i;
	int		j;
	int		start;

	if (!s || !c)
		return (NULL);
	words = ft_wordcount(s, c);
	if (!(array = ft_memalloc((sizeof(char *) * (words + 1)))))
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		array[j] = ft_strsub(s, start, i - start);
		i++;
		j++;
	}
	return (array);
}
