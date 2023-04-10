/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:16:02 by jusilanc          #+#    #+#             */
/*   Updated: 2023/04/10 17:47:15 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	c;
	size_t	d;
	size_t	needle_size;

	c = 0;
	if (!haystack || !needle)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	needle_size = ft_strlen(needle);
	while (haystack[c] && c < len)
	{
		d = 0;
		while (haystack[c + d] == needle[d] && needle[d] && (c + d) < len)
			d++;
		if (d == needle_size)
		{
			haystack += c;
			return ((char *)haystack);
		}
		c++;
	}
	return (NULL);
}
