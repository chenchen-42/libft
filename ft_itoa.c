/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 15:46:30 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/12 16:34:28 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int intlen(long n)
{
    int count;
    
    count = 0;
    if(n == 0)
        count++;
    if(n < 0)
    {
        count++;
        n = -n;
    }
    while(n > 0)
    {
        n = n / 10;
        count++;
    }
    return(count);
}

char *ft_itoa(int n)
{
    long nb;
    int size;
    char *result;
    
    nb = n;
    size = intlen(nb);
    result = malloc(sizeof(char) * (size + 1));
    if(!result)
        return(NULL);
    result[size] = '\0';
    if(nb < 0)
    {
        result[0] = '-';
        nb = -nb;
    }
    if(nb == 0)
        result[0] = '0';
    while(nb > 0)
    {
        size--;
        result[size] = (nb % 10) + 48;
        nb = nb / 10;
    }
    return(result);
}

// int main (void)
// {
//     long nb = 534;
//     long nb1 = -2147483648;
//     printf("%s\n", ft_itoa(nb));
//     printf("%s\n", ft_itoa(nb1));
// }