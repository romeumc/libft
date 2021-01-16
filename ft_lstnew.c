/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 22:39:34 by rmartins          #+#    #+#             */
/*   Updated: 2021/01/16 23:18:41 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*new_record;

	new_record = malloc(sizeof(t_list) * 1);
	if (!new_record)
		return (NULL);
	new_record[0].content = content;
	new_record[0].next = NULL;
	return (new_record);
}
