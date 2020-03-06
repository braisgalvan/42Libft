/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:16:18 by bgalvan-          #+#    #+#             */
/*   Updated: 2020/03/04 15:57:49 by bgalvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*iter;

	if (!lst || !(iter = ft_lstnew(NULL, 0)))
		return (NULL);
	iter = f(lst);
	head = iter;
	while (lst->next)
	{
		lst = lst->next;
		if (!(iter->next = f(lst)))
			return (NULL);
		iter = iter->next;
	}
	return (head);
}
