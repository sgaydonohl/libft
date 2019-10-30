/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaydon- <sgaydon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:36:56 by sgaydon-          #+#    #+#             */
/*   Updated: 2019/10/17 10:43:03 by sgaydon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_ptr;
	const char	*src_ptr;

	src_ptr = (const char *)src;
	dst_ptr = (char *)dst;
	if (!n || (src_ptr == dst_ptr && src_ptr == NULL))
		return (dst);
	while (n > 0)
	{
		*dst_ptr++ = *src_ptr++;
		n--;
	}
	return (dst);
}
