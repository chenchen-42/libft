/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 01:52:59 by marvin            #+#    #+#             */
/*   Updated: 2026/04/30 01:52:59 by marvin           ###   ########.fr       */
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
    if (*ptr == (unsigned char)c) // handles '\0'
        return ((char *)ptr);
    return (NULL);
}