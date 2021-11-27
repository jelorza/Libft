/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:07:00 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/27 15:35:35 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*cabeza;
	t_list	*new;

	if (lst || f || del)
	{
		cabeza = NULL;
		while (lst)
		{
			new = ft_lstnew((*f)(lst->content));
			if (!new)
			{
				ft_lstclear(&cabeza, del);
				return (NULL);
			}
			ft_lstadd_back(&cabeza, new);
			lst = lst->next;
		}
		return (cabeza);
	}
	return (NULL);
}
