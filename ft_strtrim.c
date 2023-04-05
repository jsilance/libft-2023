/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:02:25 by jusilanc          #+#    #+#             */
/*   Updated: 2023/04/04 12:20:49 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_indexof(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		if (s[i++] == c)
			return (--i);
	return (-1);
}

char	*ft_strtrim(const char *s1, const char *charset)
{
	int		i;
	char	*new;
	int		index_start;

	if (!s1)
		return (NULL);
	if (!charset)
		return (ft_strdup((char *)s1));
	i = 0;
	new = NULL;
	index_start = 0;
	while (s1[i] && ft_indexof(charset, s1[i]) != -1)
		i++;
	index_start = i;
	i = ft_strlen((char *)s1) - 1;
	if (index_start >= i)
		return (ft_strdup(""));
	while (s1[i] && ft_indexof(charset, s1[i]) != -1)
		i--;
	new = ft_substr(s1, index_start, i - index_start + 1);
	if (!new)
		return (NULL);
	return (new);
}
