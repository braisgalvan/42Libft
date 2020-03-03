/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:26:01 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/03/02 14:35:34 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checker(long int n)
{
	if (n < 0)
		return (1);
	return (0);
}

int			ft_atoi(char *str)
{
	int			i;
	int			flag;
	long int	result;

	i = 0;
	flag = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		if (ft_checker(result) && flag == -1)
			return (0);
		else if (ft_checker(result))
			return (-1);
		i++;
	}
	return (result * flag);
}
