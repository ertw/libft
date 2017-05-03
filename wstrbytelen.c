/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wstrbytelen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 15:56:56 by ewilliam          #+#    #+#             */
/*   Updated: 2017/03/04 15:56:58 by ewilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		wstrbytelen(const wchar_t *ws)
{
	int	i;

	i = 0;
	while (*ws)
	{
		if (*ws <= 0x007F)
			i++;
		else if (*ws <= 0x07FF)
			i += 2;
		else if (*ws <= 0xFFFF)
			i += 3;
		else if (*ws <= 0x10FFFF)
			i += 4;
		ws++;
	}
	return (i);
}
