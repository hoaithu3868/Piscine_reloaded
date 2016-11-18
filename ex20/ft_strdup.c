/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <thninh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:52:52 by thninh            #+#    #+#             */
/*   Updated: 2016/11/04 09:44:31 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (0);
}

char		*ft_strdup(char *src)
{
	char	*dup;
	int		n;

	n = 0;
	dup = (char*)malloc(sizeof(*dup) * ft_strlen(src) + 1);
	if (dup)
	{
		while (src[n])
		{
			dup[n] = src[n];
			n++;
		}
		dup[n] = '\0';
	}
	return (dup);
}
