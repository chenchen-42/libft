/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:40:02 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/12 20:01:06 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *list;
	void *content;
	t_list *node;
	
	if(!lst || !f || !del)
		return (NULL);
	list = NULL;
	while(lst != NULL)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if(node == NULL)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
int main(void)
{
    t_list *lst;
    t_list *lst1;
    t_list *lst2;

    lst = ft_lstnew("ola");
    lst1 = ft_lstnew("olaa");
    lst2 = ft_lstnew("olaaa");
    lst->next = lst1;
    lst1->next = lst2;
    printf("before: %d\n", ft_lstsize(lst));
    ft_lstdelone(lst2, del);
    lst1->next = NULL;
    printf("after: %d\n", ft_lstsize(lst));
    return (0);
}