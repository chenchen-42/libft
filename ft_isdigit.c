/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:43:11 by andmigue          #+#    #+#             */
/*   Updated: 2026/04/16 17:44:51 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
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
	printf("%d ", ft_isdigit(av[1][0]));
}*/
