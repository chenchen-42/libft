/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 12:55:43 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/09 13:17:33 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int len;
	unsigned int i;

	i = 0;
	if(!s)
		return(NULL);
	len = ft_strlen(s);
	if(!f)
		return(ft_strdup(s));
	str = malloc(sizeof(char) * (len + 1));
	if(!str)
		return (NULL);
	while(s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return(str);
}

// char test(unsigned int i, char c)
// {
//     if (i == 0)
//         return (c - 32); // uppercase if even index
//     return (c);
// }

// int main(void)
// {
//     char *s = "testeeeeeeeee";
//     char *result;

//     result = ft_strmapi(s, test);
//     printf("%s\n", result);
//     free(result);
//     return (0);
// }
