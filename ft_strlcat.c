/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:09:28 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/02/29 00:55:46 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		l1;
	int		l2;
	size_t	i;

	i = 0;
	l1 = ft_strlen(dst);
	l2 = ft_strlen((char *)src);
	if (dstsize <= (size_t)l1)
		return ((size_t)l2 + dstsize);
	while (*dst)
		dst++;
	while ((i < dstsize - (size_t)l1 - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((size_t)(l1 + l2));
}
