/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:21:30 by rmartins          #+#    #+#             */
/*   Updated: 2021/01/14 23:39:56 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int number, int i)
{
	if (number >= 10)
		get_size(number / 10, i);
	else
		return (i++);
}

void	ft_putnbr(long nb)
{
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr1(nb / 10);
		ft_putnbr1(nb % 10);
	}
	else
		ft_putchar1(nb + '0');
}

char		*ft_itoa(int n)
{
	int		len;
	char	*number;

	len = 0;
	len = get_size(n, len);
}
