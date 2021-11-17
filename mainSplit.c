#include "libft.h"

int main(void)
{
	char str[] = "   hola que tal estas";
	char c;
	char **mem;
	
	c = ' ';
	mem = ft_split(str, c);
	printf("%s\n", mem[0]);
	printf("%s\n", mem[1]);
	printf("%s", mem[2]);
}
