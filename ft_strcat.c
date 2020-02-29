/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:29:42 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/02/26 17:38:13 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*str1;
	char	*str2;
	int		l1;
	int		l2;

	str2 = (char *)s2;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(str2);
	str1 = s1 + l1;
	while (l2--)
		*str1++ = *str2++;
	*str1 = '\0';
	return (s1);
}
