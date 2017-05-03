/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wstrtombstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 15:56:56 by ewilliam          #+#    #+#             */
/*   Updated: 2017/03/04 15:56:58 by ewilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		wstrtombstr(char *dst, const wchar_t *ws)
{
	char	*tmp;

	tmp = dst;
	while (*ws)
		tmp += ft_wctomb(tmp, *ws++);
	return (0);
}
