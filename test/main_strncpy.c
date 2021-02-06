/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 02:21:16 by rmartins          #+#    #+#             */
/*   Updated: 2021/02/06 02:27:44 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main()
{
	char *src = "--> nyancat <--\n\r";
	char dst1[30];
	char dst2[30];
	size_t max = 12;

	memset(dst1, 'B', sizeof(dst1));
	memset(dst2, 'B', sizeof(dst2));
	strncpy(dst1, src, max);
	ft_strncpy(dst2, src, max);

	printf("\nstrncpy:%s", dst1);
	printf("\nft     :%s", dst2);
}