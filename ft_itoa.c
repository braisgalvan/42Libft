/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:43:19 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/02/29 11:43:03 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_len(int n)
{
	int i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	nbr;

	len = get_len(n);
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		len++;
	}
	if (!(str = malloc(sizeof(char) * (len + 1)))
		return (NULL);
	str[--len] = '\0';
	str[--len] = nbr % 10 + '0';
	while (nbr /= 10)
		str[--len] = nbr % 10 + '0';
	if (n < 0)
		str[--len] = '-';
	return (str);
}
