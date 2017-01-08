/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:18:58 by ewilliam          #+#    #+#             */
/*   Updated: 2016/12/21 09:46:40 by ewilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr2(char **s)
{
	int	y;

	y = 0;
	while (s && s[y])
	{
		ft_putstr(s[y]);
		ft_putchar('\n');
		y++;
	}
}
