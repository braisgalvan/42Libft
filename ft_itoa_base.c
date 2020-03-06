/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:24:23 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/03/04 15:59:38 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, int base)
{
	char			*str;
	int				len;
	unsigned int	nbr;

	len = ft_numlen_base(n, base);
	nbr = n;
	if (n < 0)
		nbr = -n;
	if (!(str = ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (nbr == 0)
		str[--len] = '0';
	while (nbr)
	{
		if (nbr % base >= 10)
			str[--len] = (nbr % base) + 'A' - 10;
		else
			str[--len] = (nbr % base) + '0';
		nbr /= base;
	}
	if (n < 0 && base == 10)
		str[--len] = '-';
	return (str);
}
