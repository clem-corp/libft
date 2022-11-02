#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = -1;
	if (!*little)
		return ((char *)big);
	while (big[++i] && len > 0)
	{
		k = 0;
		while ((big[i + k] || little[k]) && i + k < len
			&& big[i + k] == little[k])
		{
			k++;
			if (!little[k])
				return ((char *)(big + i));
		}
	}
	return ((void *)0);
}
