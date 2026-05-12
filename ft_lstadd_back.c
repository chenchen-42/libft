/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:53:25 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/12 19:04:53 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;
	
	if(!lst || !new)
		return;
	if(!*lst)
	{
		*lst = new;
		return;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
// int main(void)
// {
//     t_list *lst;
//     t_list *node;
// 	t_list *lst1;

//     lst = ft_lstnew("second");
//     node = ft_lstnew("first");
// 	lst1 = ft_lstnew("third");
// 	lst1->next = node;
//     ft_lstadd_back(&lst1, lst);
//     while(lst1)
//     {
//         printf("%s\n", (char *)lst1->content);
//         lst1 = lst1->next;
//     }
//     return (0);
// }