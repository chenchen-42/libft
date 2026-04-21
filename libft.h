/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:51:37 by andmigue          #+#    #+#             */
/*   Updated: 2026/04/16 17:57:25 by andmigue         ###   ########.fr       */
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

#endif 