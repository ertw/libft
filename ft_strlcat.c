/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 19:19:05 by ewilliam          #+#    #+#             */
/*   Updated: 2016/12/08 16:54:06 by ewilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dlen >= size)
		return (dlen + slen);
	ft_strncat(dst, src, size - 1);
	return (dlen + slen);
}



//	size_t	dlen;
//	size_t	slen;
//
//	dlen = ft_strlen(dst);
//	slen = ft_strlen(src);
//	if (dlen == size)
//		return (dlen + slen);
//	ft_strncat(dst, src, size != dlen + slen + 1 ? dlen : size - dlen);
//	return (dlen + slen);

//	size_t	dlen;
//	size_t	available_buffer;
//	size_t	n;
//
//	n = size;
//	dlen = 0;
//	while (*dst && n--)
//	{
//		dlen++;
//		dst++;
//	}
//	available_buffer = size - dlen - 1;
//	if (*dst)
//		return (dlen + ft_strlen(src));
//	while (*src && available_buffer)
//	{
//		*dst++ = *src++;
//		dlen++;
//		available_buffer--;
//	}
//	*dst = '\0';
//	while (*src++)
//		dlen++;
//	return (dlen);
