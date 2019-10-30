/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaydon- <sgaydon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:34:13 by sgaydon-          #+#    #+#             */
/*   Updated: 2019/10/27 20:00:03 by sgaydon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	src_len = 0;
	while (src[src_len] && dst_len + src_len + 1 < dstsize)
	{
		dst[dst_len + src_len] = src[src_len];
		src_len++;
	}
	if (dstsize && dst_len < dstsize)
		dst[dst_len + src_len] = '\0';
	return (dst_len + (unsigned long)ft_strlen(src));
}
