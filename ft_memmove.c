/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:17:14 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/08 16:33:03 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((*(char *)dst == '\0') && (*(char *)src == '\0'))
	{
		return (NULL);
	}
	if (src > dst)
	{
		return (ft_memcpy(dst, src, len));
	}
	while (len--)
	{
		((char *)dst)[len] = ((char *)src)[len];
	}
	return (dst);
}	
