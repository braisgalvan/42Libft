/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:57:39 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/03/01 14:28:28 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while ((haystack[i] == needle[j]) && haystack[i] && needle[j]
				&& len > i)
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i - j);
		i++;
	}
	return (NULL);
}
