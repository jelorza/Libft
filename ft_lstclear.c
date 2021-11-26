/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:17:56 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/26 14:57:08 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	while (*lst != NULL)
	{
		(*del)((*lst)->content);
		free (*lst);
		(*lst) = (*lst)->next;
	}
	free (*lst);
	lst = NULL;
}
