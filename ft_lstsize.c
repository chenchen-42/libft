/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:20:09 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/13 05:50:59 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main(void)
// {
//     t_list *lst;
// 	t_list *lst1;
// 	t_list *lst2;
//     lst = ft_lstnew("ola");
// 	lst1 = ft_lstnew("olaa");
// 	lst2 = ft_lstnew("olaaa");
// 	lst->next = lst1;
// 	lst1->next = lst2;
//     printf("%d\n", ft_lstsize(lst));
//     return (0);
// }