/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:56:31 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/26 19:23:37 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	if (lst)
	{
		while (lst)
		{
			lst = lst->next;
			len++;
		}
	}
	return (len);
}
