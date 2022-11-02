#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len-- >= 0)
	{
		if (*s == c % 256)
			return ((char *)s);
		s++;
	}
	return ((void *)0);
}
