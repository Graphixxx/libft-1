#include "libft.h"

void  *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	char *temp;

	temp = (char *)s;
	i = 0;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (s);
}
