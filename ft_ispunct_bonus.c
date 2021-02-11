/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:45:10 by rmartins          #+#    #+#             */
/*   Updated: 2021/02/11 22:16:46 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ispunct(int c)
{
	if (ft_isprint(c) && !ft_isalnum(c) && c != ' ')
		return (1);
	else
		return (0);
}
