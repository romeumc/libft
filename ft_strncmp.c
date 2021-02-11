/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:38:43 by rmartins          #+#    #+#             */
/*   Updated: 2021/02/11 22:17:42 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char*)s1;
	b = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (a[i] == b[i] && a[i] != '\0' && b[i] != '\0' && i < n - 1)
		i++;
	return (a[i] - b[i]);
}
