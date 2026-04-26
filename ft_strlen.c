/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:49:31 by andmigue          #+#    #+#             */
/*   Updated: 2026/04/25 02:38:34 by marvin           ###   ########.fr       */
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

/*int main(void)
{
	char *s = "ola";
	printf("%d\n", ft_strlen(s));
}/*