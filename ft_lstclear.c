/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:18:18 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/12 19:35:45 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;
	
	if(!lst || !del)
		return;
	while(*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

// int main(void)
// {
//     t_list *lst;
//     t_list *lst1;
//     t_list *lst2;

//     lst = ft_lstnew(ft_strdup("ola"));
//     lst1 = ft_lstnew(ft_strdup("olaa"));
//     lst2 = ft_lstnew(ft_strdup("olaaa"));
//     lst->next = lst1;
//     lst1->next = lst2;
//     printf("before: %d\n", ft_lstsize(lst));
//     ft_lstclear(&lst, del);
//     printf("after: %d\n", ft_lstsize(lst));
//     if(!lst)
//         printf("list is NULL\n");
//     return (0);
// }
