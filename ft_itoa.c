/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaydon- <sgaydon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:47:39 by sgaydon-          #+#    #+#             */
/*   Updated: 2019/10/27 19:57:40 by sgaydon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numlen(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			size;
	long int	nb;

	nb = n;
	size = ft_numlen(nb);
	if (!(res = malloc(sizeof(char) * (size + 1))))
		return (0);
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	res[size] = '\0';
	while (nb >= 10)
	{
		res[size - 1] = (nb % 10) + 48;
		nb = nb / 10;
		size--;
	}
	res[size - 1] = (nb % 10) + 48;
	return (res);
}
