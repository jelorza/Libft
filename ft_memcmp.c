/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:19:53 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/09 11:14:34 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 1;
	while ((*(unsigned char *)s1 || *(unsigned char *)s2) && i < n)
	{
		if (*(unsigned char *)s1 == *(unsigned char *)s2)
		{
			s1++;
			s2++;
			i++;
		}
		else
		{	
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
			break ;
		}
	}
	if (n > 0)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	else
		return (0);
}
