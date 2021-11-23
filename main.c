#include "libft.h"

int	main(void)
{
	int	alpha;
	int	digit;
	int	alnum;
	int ascii;
	int print;
	//const char stlen[] = "abcde";
//	char mem[] = "llllllllllllllllllllllllllllll";
	int set;
//	char bzero[5];
//	char dst[20];
//	char *src = "asdfg";
	int touplowr1;
//	char strchr1[] = {0,0,127,0};
//	char strchr2[] = {0,0,42,0};
//	char cmp1[] = "sdfg";
//	char cmp2[] = "-";
//	char atoii[] = "  - ";

	

	alpha = 'J';
	digit = 48;
	alnum = 49;
	ascii = 50;
	print = 127;
	set = 'a';
	touplowr1 = 'B';
/*
en la funcion strchr y strrchr  me falta controlar si c es '\0' 
unit test es make f y liftexter con make m make b make y make+nombre de funcion es solo la funcion, y war machine y liftest 
*/

//	printf("%d", isalpha(alpha));
//	printf("%d\n", isdigit(digit));
//	printf("%d", isalnum(alnum));
//	printf("%d", isascii(ascii));
//	printf("%d", isprint(print));
//	printf("%lu", strlen(stlen));
//	printf("%s\n", memset(mem, set, 5));
//	bzero(bzero, 5);
//	printf("%s\n", memcpy(mem, "zy\0xw\0vu\0\0tsr", 11));
//	printf("%s\n", memmove(dst, src, 4));	
//	printf("%lu", strlcpy(dst, src, 4));
//	printf("%c", toupper(touplowr1));
//	printf("%c", tolower(touplowr1));
//	printf("%s\n", strchr(strchr1, 'z'));	
//	printf("%d\n", strncmp(cmp1, cmp2, 1));	
//	printf("%s\n", strchr("g", 00));
//	printf("%s\n", strrchr(strchr1, 0));	
//	printf("%s\n", memchr(strchr1, \0, 3));	
//	printf("%d\n", memcmp(strchr1, strchr2, 4));	
//	printf("%s\n", strnstr(strchr1+2,'b',0));	
	printf("%d", atoi("+\t\v\f\r\n \f1234"));


//	printf("%d", ft_isalpha(alpha));
//	printf("%d", ft_isdigit(digit));
//	printf("%d", ft_isalnum(alnum));
//	printf("%d", ft_isascii(ascii));
//	printf("%d", ft_isprint(print));
//	printf("%lu", ft_strlen(stlen));
//	printf("%s", ft_memset(mem, set, 10));	
//	ft_bzero(bzero, 5);
//	printf("%s", ft_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11));
//	printf("%s", ft_memmove(dst, src, 4));		
//	printf("%lu", ft_strlcpy(dst, src, 4));
//	printf("%c", ft_toupper(touplowr1));
//	printf("%c", ft_tolower(touplowr1));
//	printf("%s", ft_strchr("g", 00));
//	printf("%s", ft_strrchr(strchr1, 0 ));
//	printf("%d\n", ft_strncmp(cmp1, cmp2, 1));	
//	printf("%s\n",ft_memchr(strchr1, \0, 3));	
//	printf("%s\n", ft_memchr(strchr1, '0', 1));	
//	printf("%d\n", ft_memcmp(strchr1, strchr2, 4));	
//	printf("%d\n",ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));	
//	printf("%d\n",ft_strnstr(strchr1+2, 'b', 0));	
	printf("%d", ft_atoi("+\t\v\f\r\n \f1234"));
//	printf("%s", ft_substr("asdfghjasdf", 4, 4));
//	printf("%s", ft_strjoin("hola", "jooooon"));
//	printf("%s", ft_strtrim("123asdfg1234", "1234"));
	return(0);
}
