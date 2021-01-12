/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 00:13:04 by rmartins          #+#    #+#             */
/*   Updated: 2021/01/12 15:03:33 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	// unsigned char temp;

	// temp = (unsigned char)c;
	//printf("c:%4d %c  | temp:%4d %c  ==>  ", c, isprint(c), temp, isprint(temp));
	//printf("c:%d %c  ==>  ", c, c);
	if ((c >= 'A' && c <= 'Z') ||
		(c >= 'a' && c <= 'z') ||
		(c >= '0' && c <= '9'))
		return (1);
	return (0);
}