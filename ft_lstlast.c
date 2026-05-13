/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:45:25 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/13 07:41:03 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

// int main(void)
// {
//     t_list *lst;
// 	t_list *lst1;
// 	t_list *lst2;

//     lst = ft_lstnew("ola");
// 	lst1 = ft_lstnew("olaa");
// 	lst2 = ft_lstnew("olaaa");
// 	lst2->next = lst1;
// 	lst1->next = lst;
//     printf("%s\n", (char *)ft_lstlast(lst)->content);
//     return (0);
// }