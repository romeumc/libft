/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:21:30 by rmartins          #+#    #+#             */
/*   Updated: 2021/01/15 12:26:43 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(long number)
{
	int i;

	i = 1;
	if (number < 0)
	{
		i++;
		number *= -1;
	}
	while (number > 10)
	{
		i++;
		number /= 10;
	}
	return (i);
}

static void	ft_putnbr_str(long nb, char *str)
{
	int i;
	int neg;

	i = 0;
	neg = 0;
	if (nb < 0)
	{
		nb = -nb;
		neg = 1;
	}
	while (nb)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	if (neg)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
}

static char	*ft_strrev(char *str)
{
	int i;
	int j;
	char aux;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		aux = str[i];
		str[i] = str[j];
		str[j] = aux;
		i++;
		j--;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = 0;
	len = get_size(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL || n == 0)
		return ((n == 0) ? "0" : NULL);
	ft_putnbr_str(n, str);
	return (ft_strrev(str));
}
