/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putzerox.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:14:26 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:14:28 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putzerox(char letter)
{
	if (letter == 'x')
		ft_putstr("0x");
	else
		ft_putstr("0X");
}
