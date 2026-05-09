/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:20:35 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/09 13:36:25 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;
	
	i = 0;
	if(!s || !f)
		return;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return;
}
// void test(unsigned int i, char *c)
// {
//     if (i == 0)
// 		*c = *c - 32;
// }

// int main(void)
// {
//     char s[] = "testeeeeeeeee";
//     ft_striteri(s, test);
//     printf("%s\n", s);
//     return (0);
// }
