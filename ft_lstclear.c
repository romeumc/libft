/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 10:07:20 by rmartins          #+#    #+#             */
/*   Updated: 2021/02/11 22:16:54 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (*lst != NULL)
	{
		del((*lst)->content);
		ft_lstclear(&(*lst)->next, del);
		free(*lst);
		(*lst) = NULL;
	}
}
