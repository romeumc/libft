/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 10:45:22 by rmartins          #+#    #+#             */
/*   Updated: 2021/01/14 15:15:14 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	saveword(char *str, char c, int counter, char **result)
{
	int		len;
	int		j;
	char	*word;

	len = 0;
	j = 0;
	while (str[len] != c && str[len] != '\0')
		len++;
	word = malloc(sizeof(char) * (len + 1));
	while (j < len)
	{
		word[j] = str[j];
		j++;
	}
	word[j] = '\0';
	result[counter] = word;
}

static int	wordcount(char *ptr, char c, char **res, int save)
{
	int		i;
	int		wc;

	i = 0;
	wc = 1;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == c && ptr[i + 1] != c && ptr[i + 1] != '\0')
		{
			if (save == 1)
				saveword(&ptr[i], c, wc - 1, res);
			wc++;
		}
		i++;
	}
	return (wc);
}

char		**ft_split(char const *s, char c)
{
	char	*ptr;
	char	**res;
	int		wc;

	if (!s)
		return (NULL);
	ptr = ft_strtrim(s, &c);
	if (!ptr)
		return (NULL);
	wc = wordcount(ptr, c, NULL, 0);
	//printf("\ns:\"%s\" | c:\"%c\" | ptr:\"%s\" | wc:%d", s, c, ptr, wc);
	res = malloc(sizeof(char *) * (wc));
	wordcount(ptr, c, res, 1);
	res[wc] = NULL;
	free(ptr);
	return (res);
}
