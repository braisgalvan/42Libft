/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 19:11:03 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/03/03 22:34:34 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isvalid(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c < '0' + base);
	return ((c >= '0' && c <= '9') || (c >= 'A' && c < ('A' + base - 10))
			|| (c >= 'a' && c < ('a' + base - 10)));
}

int			ft_atoi_base(const char *n, int base)
{
	int			flag;
	long int	result;

	flag = 1;
	result = 0;
	while (ft_isspace(*n))
		n++;
	if (*n == '-')
		flag = -1;
	if (*n == '+' || *n == '-')
		n++;
	while (ft_isvalid(*n, base))
	{
		if (ft_isdigit(*n))
			result = result * base + *n - '0';
		else if (ft_isupper(*n))
			result = result * base + *n - 'A' - 10;
		else if (ft_islower(*n))
			result = result * base + *n - 'a' - 10;
		n++;
		if (result < 0)
			return (flag == -1 ? 0 : -1);
	}
	return (result * flag);
}
