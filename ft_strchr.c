/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:14:50 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:14:52 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = -1;
	while (s[++i])
	{
		if (s[i] == c)
			return ((char*)&s[i]);
	}
	if (c == '\0')
		return (char*)&s[i];
	return (NULL);
}