/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 16:05:08 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/12 16:24:10 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if(!lst || !new)
		return;
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
//     t_list *lst;
//     t_list *node;

//     lst = ft_lstnew("second");
//     node = ft_lstnew("first");
//     ft_lstadd_front(&lst, node);
//     while(lst)
//     {
//         printf("%s\n", (char *)lst->content);
//         lst = lst->next;
//     }
//     return (0);
// }