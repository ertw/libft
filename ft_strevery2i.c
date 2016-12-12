/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strevery2i.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 16:19:42 by ewilliam          #+#    #+#             */
/*   Updated: 2016/12/11 16:19:47 by ewilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strevery2i(char **ar, int (*f)(char c, int x, int y))
{
	int x;
	int y;

	if (!ar || ! f)
		return (0);
	x = 0;
	y = 0;
	while (ar[y++])
	{
		while (ar[y][x++])
		{
			if (!f(ar[y][x], x, y))
				return (0);
		}
	}
	return (1);
}
