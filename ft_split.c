#include <stdio.h>
#include <stdlib.h>

char	*ft_give_value(size_t end, size_t start, const char *s)
{
	char *ret;
	size_t i;
	size_t counter;

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



static char **ft_split_for_mem(const char *s, char c, char **mem)
{
	size_t end;
	size_t start;
	size_t count_mem;

//	end = 0;
	start = 0;
	count_mem = 0;
	while (s[start] == c)
		start++;
	end = start;
	while (s[end])
	{
		if (s[end] == c && s[end + 1] != c)
		{
			mem[count_mem] = ft_give_value(end, start, s);
			start = end + 1;
			count_mem++;
			end++;
		}
		else
			end++;
	}
	mem[count_mem] = 00;
	return (mem);
}

static int ft_count_strs(const char *s, char c)
{
	size_t n;
	size_t tot_strs;


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
		return (tot_strs);
}	

char	**ft_split(const char *s, char c)
{
	char	**mem;

	if (c == 00 || *s == 00)
		return (NULL);

	mem = (char **) malloc (sizeof(char *) * ft_count_strs(s, c) + 1);
	if (!mem)
		return (NULL);
	mem = ft_split_for_mem(s, c, mem);
	return (mem);
}
