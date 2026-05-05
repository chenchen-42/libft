/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:09:42 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/05 20:42:34 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    if (nmemb != 0 && size > 2147483647 /*64745898548956*/ / nmemb)
        return (NULL);
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);
    ft_memset(ptr, 0, nmemb * size);
    return (ptr);
}

/* int main(void)
{
	size_t nmemb = 2; 
	size_t size = 1;
	printf("%p", ft_calloc(nmemb,size));
} */