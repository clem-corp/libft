#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	size_dst;
	unsigned int	size_src;
	unsigned int	i;

	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	i = 0;
	if (size <= size_dst)
		return (size + size_src);
	while (src[i] && (size_dst + i) < size - 1)
	{
		dst[size_dst + i] = src[i];
		i++;
	}
	dst[size_dst + i] = '\0';
	return (size_dst + size_src);
}
