/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaydon- <sgaydon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 19:06:19 by sgaydon-          #+#    #+#             */
/*   Updated: 2019/10/29 12:42:06 by sgaydon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inarray(char c, const char *array)
{
	int i;

	i = 0;
	while (array[i])
	{
		if (c == array[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_securit(void)
{
	char *res;

	if (!(res = (char*)malloc(sizeof(char) * 1)))
		return (NULL);
	res[0] = '\0';
	return (res);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!(s1 && set))
		return (0);
	start = 0;
	while (s1[start] && ft_inarray(s1[start], set))
		start++;
	end = ft_strlen(s1);
	if (start == end)
		return (ft_securit());
	end--;
	while (s1[end] && ft_inarray(s1[end], set))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
