/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:30:06 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/23 14:10:27 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	if (!s1 && !s2)
		return (0);
	if (n == 0)
		return (0);
	while ((c1[i] != 00 || c2[i] != 00) && i < n -1)
	{	
		if (c1[i] != c2[i])
		{
			return (c1[i] - c2[i]);
		}
		else
			i++;
	}
	return (c1[i] - c2[i]);
}
