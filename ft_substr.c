#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*d;
	size_t		d_len;
	size_t		s_len;
	size_t		i;

	i = 0;
	s_len = ft_strlen(s);
	if (start <= s_len && start + len > s_len)
		d_len = s_len - start + 1;
	else if (start > s_len)
		d_len = 1;
	else
		d_len = len + 1;
	d = malloc(d_len * sizeof(char));
	if (!d)
		return (NULL);
	while (i < d_len)
	{
		d[i] = '\0';
		i++;
	}
	if (s + start <= s + s_len)
		ft_strlcpy(d, s + start, d_len);
	return (d);
}
