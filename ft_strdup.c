/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:35:39 by clacaill          #+#    #+#             */
/*   Updated: 2022/11/04 13:35:45 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
