/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:15:25 by rmartins          #+#    #+#             */
/*   Updated: 2021/01/13 17:46:28 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	lenght;

	lenght = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (NULL);
	lenght = ((lenght - start) < len ? (lenght - start) : len);
	ptr = (char *)malloc(lenght + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, &s[start], lenght);
	ptr[lenght + 1] = '\0';
	return (ptr);
}
