#include "ft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	/* test ft_strncmp */

	// char s1[] = "abcaaa";
	// char s2[] = "abcbaa";
	// char s3[] = "abaaaa";
	// char s4[] = "abzaaa";

	// printf("%d\n", (int) ft_strncmp(s1, s2, 3));
	// printf("%d\n\n", strncmp(s1, s2, 3));
	// printf("%d\n", (int) ft_strncmp(s1, s3, 3));
	// printf("%d\n\n", strncmp(s1, s3, 3));
	// printf("%d\n", (int) ft_strncmp(s1, s4, 3));
	// printf("%d\n", strncmp(s1, s4, 3));

	/* test ft_strlcat */

	// char s5[] = "AAA";
	// char s6[] = "BBBCCC";
	
	// printf("%i: %s\n", (int) ft_strlcat(s5, s6, 3), s5);

	int	c = 67;

	printf("%i $%c$\n", ft_isalpha(c), c);
	printf("%i $%c$\n", ft_isdigit(c), c);
	printf("%i $%c$\n", ft_isalnum(c), c);
	printf("%i $%c$\n", ft_isascii(c), c);
	printf("%i $%c$\n", ft_isprint(c), c);
	printf("%i\n", (int) ft_strlen("123"));
	printf("%c $%c$\n", ft_toupper(c), c);
	printf("%c $%c$\n", ft_tolower(c), c);
	
}
