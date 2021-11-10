/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:09:45 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/10 13:39:17 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpi;
	size_t	i;

	cpi = (char *)malloc(ft_strlen(s1 + 1) * sizeof(*s1));
	if (*s1 == 00)
		return (00);
	if (!cpi)
		return (00);
	else
	{
		i = 0;
		while (s1[i])
		{
			cpi[i] = s1[i];
			i++;
		}
	}
	return (cpi);
}
