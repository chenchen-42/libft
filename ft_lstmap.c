/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:40:02 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/15 14:00:00 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	void	*content;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (node == NULL)
		{
			del (content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
// void *to_upper(void *content)
// {
//     char *str;
//     int i;

//     i = 0;
//     str = ft_strdup((char *)content);
//     while (str[i])
//     {
//         str[i] = str[i] - 32;
//         i++;
//     }
//     return (str);
// }
// void del(void *content)
//  {
//      free(content);
// }

// int main(void)
// {
//     t_list *lst;
//     t_list *result;

//     lst = ft_lstnew(ft_strdup("ola"));
//     lst->next = ft_lstnew(ft_strdup("olaa"));
//     lst->next->next = ft_lstnew(ft_strdup("olaaa"));
//     result = ft_lstmap(lst, to_upper, del);
//     while (result)
//     {
//         printf("%s\n", (char *)result->content);
//         result = result->next;
//     }
//     return (0);
// }
