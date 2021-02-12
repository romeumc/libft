/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 22:28:57 by rmartins          #+#    #+#             */
/*   Updated: 2021/02/12 01:44:52 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void		ft_print_radix(long long int nbr, char *base, char *result, int *pos)
{
	int len_base;

	len_base = ft_strlen(base);
	if (nbr < 0)
	{
		nbr *= -1;
		// result[*pos] = '-';
		// (*pos)++;
	}
	if (nbr >= len_base)
	{
		ft_print_radix(nbr / len_base, base, result, pos);
		ft_print_radix(nbr % len_base, base, result, pos);
	}
	else
	{
		result[pos[0]] = base[nbr];
		pos[0]++;
	}
}

static char	*getbase(int numbase, char *base)
{
	int i;

	i = 0;
	while (i < numbase)
	{
		if (i < 10)
			base[i] = i + '0';
		else
			base[i] = i + '0' + 7;
		i++;
	}
	base[i] = '\0';
	return (base);
}

char	*ft_itoa_base(int number, int numbase)
{
	char	*result;
	char	*base;
	int		pos;

	if (numbase == 10)
		return(ft_itoa(number));
	pos = 0;
	result = ft_calloc(34, sizeof(char));
	base = ft_calloc(numbase + 1, sizeof(char));
	base = getbase(numbase, base);
	ft_print_radix(number, base, result, &pos);
	result[pos] = '\0';
	//printf("number:%d | numbase:%d | base:%s ==> %s\n", number, numbase, base, result);
	free(base);
	//printf("tetse:%s\n", result);
	//free(result);
	return (result);
}


// int main(void)
// {
// 	printf("n.10 b.10 - %s\n",ft_itoa_base(10, 10));
// 	printf("n.20 b.16 - %s\n",ft_itoa_base(20, 16));
// 	printf("n.64 b.16 - %s\n",ft_itoa_base(64, 16));
// 	printf("n.64 b.2 - %s\n",ft_itoa_base(64, 2));
// }