/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:01:19 by clacaill          #+#    #+#             */
/*   Updated: 2022/11/04 17:27:04 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	const char	*s;
	char		*d;

	i = 0;
	s = (const char *)src;
	d = (char *)dest;
	while (n-- > 0)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
