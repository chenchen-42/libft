/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 23:38:16 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/05 23:38:16 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    const unsigned char *ptr;

    ptr = (const unsigned char *)s;
    while (*ptr)
    {
        if (*ptr == (unsigned char)c)
            return ((char *)ptr);
        ptr++;
    }
    if (*ptr == (unsigned char)c)
        return ((char *)ptr);
    return (NULL);
}