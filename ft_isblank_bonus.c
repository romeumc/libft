/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 22:48:50 by rmartins          #+#    #+#             */
/*   Updated: 2021/02/13 15:22:19 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isblank(int c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}
