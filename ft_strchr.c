/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:17:51 by clacaill          #+#    #+#             */
/*   Updated: 2022/11/04 17:31:10 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
