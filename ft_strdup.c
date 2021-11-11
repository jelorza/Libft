/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:09:45 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/11 18:08:36 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpi;
	size_t	i;

	cpi = (char *)malloc(ft_strlen(s1) + 1 * sizeof(char));
	if (!cpi)
		return (00);
	i = 0;
	ft_memcpy(cpi, s1, ft_strlen(s1));
	*(cpi + ft_strlen(s1)) = 00;
	return (cpi);
}
