#include "ft.h"

size_t	ft_strlen(const char *s)
{
	if (!*s)
		return (0);
	return (ft_strlen(++s) + 1);
}
