/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:51:37 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/23 19:24:01 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_quit_c(const char *s, char c)
{
	size_t	start;

	start = 0;
	while (s[start] == c)
		start++;
	return (start);
}

char	*ft_give_value(size_t end, size_t start, const char *s)
{
	char	*ret;
	size_t	i;
	size_t	counter;

	counter = end - start;
	i = 0;
	ret = (char *) malloc (sizeof(char) * (counter + 1));
	if (!ret)
		return (NULL);
	while (counter--)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}

static char	**ft_split_for_mem(const char *s, char c, char **mem)
{
	size_t	end;
	size_t	start;
	size_t	count_mem;

	count_mem = 0;
	start = ft_quit_c(s, c);
	end = start;
	while (end++ < (strlen(s) + 1))
	{
		if ((s[end] == c) || s[end] == '\0')
		{
			mem[count_mem++] = ft_give_value(end, start, s);
			start = end + 1;
			while (s[start] == c || s[start] == '\0')
				start++;
			end = start;
		}
	}	
	mem[count_mem] = 00;
	return (mem);
}

static int	ft_count_strs(const char *s, char c)
{
	size_t	n;
	size_t	tot_strs;

	n = 0;
	tot_strs = 0;
	while (s[n] == c)
		n++;
	while (s[n])
	{
		if ((s[n] == c) && (s[n + 1] != c))
			tot_strs++;
		n++;
	}
	if (tot_strs == 0)
		return (0);
	else if (tot_strs == 1)
		return (tot_strs);
	else
		return (tot_strs + 1);
}	

char	**ft_split(const char *s, char c)
{
	char	**mem;

//	if (ft_count_strs(s, c) == 0)
//		return (00);
	if (*s == 00 || c == 00)
		return (0);
	mem = (char **) malloc (sizeof(char *) * ft_count_strs(s, c) + 1);
	if (!mem)
		return (0);
	if (ft_count_strs(s, c) == 0)
	{
		mem[0] = 00;
		return (mem);
	}
	else
		mem = ft_split_for_mem(s, c, mem);
	return (mem);
}
