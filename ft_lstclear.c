/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaydon- <sgaydon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:09:56 by sgaydon-          #+#    #+#             */
/*   Updated: 2019/10/27 20:23:06 by sgaydon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *actual;
	t_list *next;

	if (lst && *lst && del)
	{
		actual = *lst;
		while (actual)
		{
			next = actual->next;
			del(actual->content);
			free(actual);
			actual = next;
		}
		*lst = NULL;
	}
}
