/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 17:03:24 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/10 22:43:15 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstring;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen (s1);
	if (!set)
		return (ft_strdup (s1));
	while (s1[start] && ft_strchr (set, s1[start]))
		start++;
	while (end > start && ft_strchr (set, s1[end - 1]))
		end--;
	newstring = ft_substr (s1, start, end - start);
	return (newstring);
}

// int main(void)
// {
// 	char *s1 = ft_strtrim("oaoaoaoaola tudo bem?oaoao", "oa");
// 	printf("%s", s1);
// }
