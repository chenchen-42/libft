/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:15:14 by andmigue          #+#    #+#             */
/*   Updated: 2026/04/16 17:45:02 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main (int ac, char **av)
{
	// if(ac != 1)
	// {
	// 	int i = 1;
	// 	while(av[i] != NULL)
	// 	{
	// 		printf("%d\n", ft_isdigit((av[i][0])));
	// 		i++;
	// 	}
	// }
	if (ac != 2)
		return 0;
	printf("%d ", ft_isascii(av[1][0]));
}*/