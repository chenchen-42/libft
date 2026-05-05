/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 19:56:08 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/05 21:08:52 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	size_t len;
	size_t lens1;
	
	if(!s1 && !s2)
		return (NULL);
	if(!s1)
		return (ft_strdup(s2));
	if(!s2)
		return (ft_strdup(s1));
	lens1 = ft_strlen(s1);
	len = lens1 + (ft_strlen(s2));
	str = malloc(sizeof(char) * (len + 1));
	if(!str)
		return (NULL);
	ft_memcpy(str, s1, lens1);
	ft_memcpy(&str[lens1], s2, len - lens1);
	str[len + 1] = '\0';
	return (str);
}

int main(void)
{
	
	char const *s1 = "olaaasdads";
	char const *s2 = " andre";
	char *result = ft_strjoin(s1, s2);
	
	while(1)
		printf("%s\n", result);
	free(result);
}