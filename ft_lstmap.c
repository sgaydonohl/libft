/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaydon- <sgaydon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:20:03 by sgaydon-          #+#    #+#             */
/*   Updated: 2019/10/27 20:24:01 by sgaydon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*newlst;
	void	*tmp;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst->content);
	newlst = ft_lstnew(tmp);
	if (!newlst)
		return (NULL);
	ret = newlst;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst->content);
		newlst->next = ft_lstnew(tmp);
		if (!newlst->next)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		newlst = newlst->next;
		lst = lst->next;
	}
	return (ret);
}
