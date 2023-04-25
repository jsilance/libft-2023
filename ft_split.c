/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:21:32 by jusilanc          #+#    #+#             */
/*   Updated: 2023/04/25 01:12:46 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_count(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (s && *s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			while (*s && *s != c)
				s++;
			words++;
		}
	}
	return (words);
}

static char	**ft_duty_free(char **ptr_ptr, int words)
{
	int	i;

	i = 0;
	if (!ptr_ptr)
		return (NULL);
	while (ptr_ptr[i] && i < words)
		free((void *)ptr_ptr[i++]);
	free((void *)ptr_ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	words;
	size_t	i[2];

	i[0] = 0;
	if (!s)
		return (NULL);
	words = words_count(s, c);
	ptr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	while (i[0] < words)
	{
		i[1] = 0;
		while (*s && *s == c)
			s++;
		while (s[i[1]] && s[i[1]] != c)
			i[1]++;
		ptr[i[0]++] = ft_substr(s, 0, i[1]);
		if (!ptr[i[0] - 1])
			return (ft_duty_free(ptr, i[0] - 1));
		s += i[1];
	}
	ptr[i[0]] = NULL;
	return (ptr);
}
