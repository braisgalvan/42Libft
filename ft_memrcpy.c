/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:43:17 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/02/26 17:56:36 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrcpy(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	if (!dst || !src)
		return (NULL);
	s1 = (char *)dst + n;
	s2 = (char *)src + n;
	while (n--)
		*--s1 = *--s2;
	return (dst);
}
