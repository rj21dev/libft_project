#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// printf("%s\n", strnstr("AAABBBCCC", "BBB", 6));
	// printf("%s\n", ft_strnstr("AAABBBCCC", "BBB", 6));

	// char	str[10];
	// printf("%lu %s\n", strlcpy(str, "BBB", 4), str);
	// printf("%lu %s\n", ft_strlcpy(str, "BBB", 4), str);

	// char s1[] = "AAA";
	// char s2[] = "BBBCCC";
	
	// printf("%lu: %s\n", ft_strlcat(s1, s2, 3), s1);
	// printf("%lu: %s\n", strlcat(s1, s2, 3), s1);

	char	str[10] = "qwertyuiop";
	
	ft_memcpy(str, "12345", 3);
	
	
		printf("%s", str);
}