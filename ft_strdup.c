#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;

	i = -1;
	d = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!d)
		return ((void *)0);
	while (s[++i])
		d[i] = s[i];
	d[i] = '\0';
	return (d);
}
