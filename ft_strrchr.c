/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:04:51 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/02/23 14:26:21 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (i < (int)ft_strlen((char *)s) + 1)
	{
		if (*(s + (int)ft_strlen((char *)s) - i) == (char)c)
			return ((char *)s + (int)ft_strlen((char *)s) - i);
		i++;
	}
	return (NULL);
}
