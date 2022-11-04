/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:30:41 by clacaill          #+#    #+#             */
/*   Updated: 2022/11/04 17:30:42 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*d;

	i = 0;
	d = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!d || !s || !f)
		return ((void *)0);
	while (s[i])
	{
		d[i] = (*f)(i, s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}
