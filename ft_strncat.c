/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:07:08 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/02/29 00:56:38 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*str2;
	int		l1;

	l1 = ft_strlen(s1);
	str1 = s1 + l1;
	str2 = (char *)s2;
	while (n-- && *str2)
		*str1++ = *str2++;
	*str1 = '\0';
	return (s1);
}
