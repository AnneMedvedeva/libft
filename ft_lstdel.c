/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:09:28 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:09:30 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst;
	t_list *nextlst;

	lst = *alst;
	while (lst)
	{
		nextlst = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = nextlst;
	}
	*alst = NULL;
}
