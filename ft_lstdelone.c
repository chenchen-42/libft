/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:09:29 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/13 08:02:44 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del(void *content)
// {
//     free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del (lst->content);
	free (lst);
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
//     ft_lstdelone(lst2, del);
//     lst1->next = NULL;
//     printf("after: %d\n", ft_lstsize(lst));
//     return (0);
// }