/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 23:39:08 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/05 23:39:08 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *last;

    last = NULL;
    while (*s)
    {
        if ((unsigned char)*s == (unsigned char)c)
            last = s;
        s++;
    }
    if ((unsigned char)*s == (unsigned char)c)
        return ((char *)s);
    return ((char *)last);
}