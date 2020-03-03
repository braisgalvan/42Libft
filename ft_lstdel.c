/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:12:09 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/03/02 14:44:43 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *nptr;

	nptr = *alst;
	while (nptr)
	{
		(del)(nptr->content, nptr->content_size);
		nptr = nptr->next;
		free(nptr);
	}
}
