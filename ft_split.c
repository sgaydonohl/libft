/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaydon- <sgaydon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:12:01 by sgaydon-          #+#    #+#             */
/*   Updated: 2019/10/29 11:40:43 by sgaydon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *str, char c)
{
	int count;
	int found;

	count = 0;
	found = 0;
	while (*str)
	{
		if (*str != c && found == 0)
		{
			found = 1;
			count++;
		}
		else if (found == 1 && *str == c)
			found = 0;
		str++;
	}
	return (count);
}

static char	*ft_doit(const char *s, char c)
{
	char	*res;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(res = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ft_memmove(res, s, i);
	res[i] = '\0';
	return (res);
}

char		**ft_clean(char **res, int i)
{
	while (i-- >= 0)
		free(res[i]);
	free(res);
	return (0);
}

char		**ft_split(const char *s, char c)
{
	int		nbwords;
	int		i;
	char	**res;

	if (!s)
		return (NULL);
	nbwords = ft_countwords(s, c);
	if (!(res = malloc(sizeof(char *) * (nbwords + 1))))
		return (NULL);
	i = 0;
	while (i < nbwords)
	{
		while (*s && *s == c)
			s++;
		if (!(res[i++] = ft_doit(s, c)))
			return (ft_clean(res, i));
		while (*s && *s != c)
			s++;
	}
	res[i] = NULL;
	return (res);
}
