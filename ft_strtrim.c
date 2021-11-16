/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:07:09 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/16 20:12:07 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_compare(const char *set, int c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	start = 0;
	end = 0;
	while (s[start] && ft_compare(set, s[start]))
		start++;
	end = ft_strlen(s);
	while (end > start && ft_compare(set, s[end - 1]))
			end--;
	ptr = (char *)malloc(sizeof(*s) * (end - start + 1));
	if (!ptr)
		return (NULL);
	while (start < end)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
