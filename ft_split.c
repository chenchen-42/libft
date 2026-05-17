/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmigue <andmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 17:09:59 by andmigue          #+#    #+#             */
/*   Updated: 2026/05/13 07:50:54 by andmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	count_letter(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

static void	ft_free(char **s, int index)
{
	while (index >= 0)
	{
		free (s[index]);
		index--;
	}
	free (s);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	result = malloc(sizeof (char *) * (count_words (s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		result[j] = ft_substr(s, i, count_letter(&s[i], c));
		if (!result[j])
			return (ft_free(result, j), NULL);
		j++;
		i = i + count_letter(&s[i], c);
	}
	result[j] = NULL;
	return (result);
}

/* 
int main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	char *s = av[1];
	char **d;
	size_t i = 0;
	char c = av[2][0];
	d = ft_split(s, c);
	while (d[i] != NULL)
	{
		printf("%s\n", d[i]);
		free(d[i]);
		i++;
	}
	free(d);
	return (0);
} */
