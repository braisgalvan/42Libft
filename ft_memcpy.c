/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:24:45 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/03/02 11:23:12 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	if (dst == NULL && src == NULL)
		return (NULL);
	s1 = (char *)dst;
	s2 = (char *)src;
	while (n--)
		*s1++ = *s2++;
	return (dst);
}
