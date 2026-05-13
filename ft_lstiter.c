/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:17:51 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/13 07:48:39 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void print(void *content)
// {
//     printf("%s\n", (char *)content);
// }

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
//     ft_lstiter(lst, print);
//     return (0);
// }