/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaydon- <sgaydon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:33:00 by sgaydon-          #+#    #+#             */
/*   Updated: 2019/10/14 17:39:56 by sgaydon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	char_c;
	unsigned char	*tmp;

	char_c = (unsigned char)c;
	tmp = b;
	while (len > 0)
	{
		len--;
		*(tmp + len) = char_c;
	}
	return (b);
}
