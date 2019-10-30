/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaydon- <sgaydon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:37:40 by sgaydon-          #+#    #+#             */
/*   Updated: 2019/10/24 19:05:36 by sgaydon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*src_ptr;
	unsigned char		*dst_ptr;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (NULL);
	src_ptr = (const unsigned char *)src;
	dst_ptr = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		if (src_ptr[i] == (unsigned char)c)
			return (dst_ptr + i + 1);
		i++;
	}
	return (NULL);
}
