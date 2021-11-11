/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:47:53 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/11 15:26:33 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	if (c == 0)
		return ((char *)(s + ft_strlen(s)));
	while (*s != 00)
		s++;
	s--;
	while (*s != (char )c && *s != 00)
		s--;
	if (*s == 00)
		return (0);
	else
		return ((char *)s);
}
