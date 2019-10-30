/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaydon- <sgaydon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:45:38 by sgaydon-          #+#    #+#             */
/*   Updated: 2019/10/17 10:43:12 by sgaydon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*src_ptr;
	char		*dst_ptr;

	src_ptr = (const char *)src;
	dst_ptr = (char *)dst;
	if (!len || (src_ptr == dst_ptr && src_ptr == NULL))
		return (dst);
	if (src_ptr < dst_ptr)
	{
		src_ptr += len - 1;
		dst_ptr += len - 1;
		while (len-- > 0)
			*dst_ptr-- = *src_ptr--;
	}
	else
	{
		while (len > 0)
		{
			*dst_ptr++ = *src_ptr++;
			len--;
		}
	}
	return (dst);
}
