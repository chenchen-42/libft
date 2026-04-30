/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:51:37 by andmigue          #+#    #+#             */
/*   Updated: 2026/04/30 03:24:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int  ft_isalpha(int c);
int	 ft_isdigit(int c);
int	 ft_isalnum(int c);
int	 ft_isascii(int c);
int	 ft_isprint(int c);
size_t	 ft_strlen(const char *s);
int ft_atoi(const char *nptr);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_tolower(int c);
int ft_toupper(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);



#endif 