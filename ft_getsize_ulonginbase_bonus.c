/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_size_inbase_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 00:30:15 by rmartins          #+#    #+#             */
/*   Updated: 2021/02/27 22:36:34 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getsize_ulonginbase(unsigned long nb, char *base)
{
	size_t			lenbase;
	int				counter;

	counter = 1;
	lenbase = ft_strlen(base);
	while (nb >= (unsigned long)lenbase)
	{
		nb /= lenbase;
		counter++;
	}
	return (counter);
}
