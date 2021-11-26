/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:38:43 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/26 20:27:28 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*actual;

	actual = *lst;
	if (actual == NULL)
		*lst = new;
	else
	{
		while (actual->next != NULL)
			actual = actual->next;
		actual->next = new;
	}
}
