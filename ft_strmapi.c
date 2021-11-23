/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:20:26 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/23 19:22:50 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f) (unsigned int, char))
{
	char	*dest;
	size_t	i;

	if (!s)
		return (NULL);
	i = -1;
	dest = (char *) malloc (sizeof(char) * ft_strlen(s) + 1);
	if (!dest)
		return (0);
	while (s[++i])
	{
	dest[i] = f(i, ((char *)s)[i]);
	}
	dest[i] = '\0';
	return (dest);
}
