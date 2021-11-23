#include "libft.h"

int main(void)
{
	char str[] = "                  olo";
	char c;
	char **mem;
	size_t i;
	
	i = 0;
	c = ' ';
	mem = ft_split(str, c);
	while (mem[i])
	{
		printf("%s\n", mem[i]);
		i++;
	}
}
