/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:04:51 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/03/05 15:11:09 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (i < ft_strlen(s) + 1)
	{
		if (*(s + ft_strlen(s) - i) == c)
			return ((char *)s + ft_strlen(s) - i);
		i++;
	}
	return (NULL);
}
