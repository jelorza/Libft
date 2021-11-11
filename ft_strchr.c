/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:34:08 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/10 21:08:32 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if ((char) c == '\0')
		return ((char *)s + ft_strlen(s));
	while ((char )c != *s && *s != 00)
	{
		s++;
	}
	if (*s == 00)
		return (NULL);
	else
		return ((char *)s);
}
