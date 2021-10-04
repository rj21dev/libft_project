#include "ft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		++i;
	while (src[j] && j < dstsize - 1)
	{
		dst[i] = src[j];
		++i;
		++j;
	}
	dst[i] = 0;
	return (i);
}
