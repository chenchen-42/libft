/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:49:31 by andmigue          #+#    #+#             */
/*   Updated: 2026/04/16 17:57:14 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int i;
	i = 0;
	while(s[i])
	{
		i++;	
	}
	return (i);
}

int main(void)
{
	char *s = "ola";
	printf("%d\n", ft_strlen(s));
}