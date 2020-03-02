/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:09:28 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/03/01 14:37:28 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l1;
	size_t	l2;
	size_t	i;

	i = 0;
	l1 = ft_strlen(dst);
	l2 = ft_strlen((char *)src);
	if (dstsize <= (size_t)l1)
		return (l2 + dstsize);
	while (i < dstsize - l1 - 1 && src[i])
	{
		dst[l1 + i] = src[i];
		i++;
	}
	dst[l1 + i] = '\0';
	return (l1 + l2);
}
