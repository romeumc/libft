/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:12:23 by rmartins          #+#    #+#             */
/*   Updated: 2021/02/19 11:27:50 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_long_base(long int nbr, char *base, char *result)
{
	size_t	len_base;

	len_base = ft_strlen(base);
	if (nbr < 0)
	{
		nbr *= -1;
	}
	if (nbr >= len_base)
	{
		ft_print_radix(nbr / len_base, base, result);
		ft_print_radix(nbr % len_base, base, result);
	}
	else
	{
		ft_putchar(base[nbr]);
	}
}
