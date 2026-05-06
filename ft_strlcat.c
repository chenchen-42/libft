/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 22:11:16 by marvin            #+#    #+#             */
/*   Updated: 2026/05/04 22:11:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t i;
    size_t original_dst_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = 0;
    original_dst_len = dst_len;
    if(size <= dst_len)
        return(size + src_len);
    while(src[i] && dst_len < size - 1)
    {
        dst[dst_len] = src[i];
        i++;
        dst_len++;
    }
    dst[dst_len] = '\0';
    return(original_dst_len + src_len);
}