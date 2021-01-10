/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 21:35:02 by rmartins          #+#    #+#             */
/*   Updated: 2021/01/10 21:44:19 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	temp;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	temp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (d[i] != '\0' || s[i] != '\0' || s[i] == temp)
			d[i] = s[i];
		else
			return (0);
		i++;
	}
	return (d);
}
