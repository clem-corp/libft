/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:52:04 by clacaill          #+#    #+#             */
/*   Updated: 2022/11/04 12:32:03 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;

	src = s;
	while (n-- > 0)
	{
		if (*src == (unsigned char)c)
			return ((void *)src);
		src++;
	}
	return ((void *)0);
}
