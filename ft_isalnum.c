/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:12:10 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/13 05:53:30 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/* int main(void)
{
	char a = 'a';
	printf("My own: %d\n", ft_isalnum(a));
	printf("Original: %d\n", isalnum(a));
	return (0);

} */
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
	printf("%d ", ft_isalnum(av[1][0]));
}*/
