/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 01:53:27 by marvin            #+#    #+#             */
/*   Updated: 2026/04/30 01:53:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *last;

    last = NULL;
    while (*s)
    {
        if (*s == (char)c)
            last = s;
        s++;
    }
    if (*s == (char)c)
        return ((char *)s);
    return ((char *)last);
}