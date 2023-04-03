/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:16:02 by jusilanc          #+#    #+#             */
/*   Updated: 2023/04/03 14:32:32 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	char	*finded;
	size_t	i;

	if (!haystack || !needle)
		return (NULL);
	ptr = (char *)haystack;
	while (ptr && *ptr)
	{
		i = 0;
		ptr = ft_strchr(ptr, (int)needle[i]);
		if (ptr - haystack > (long)len)
			return (NULL);
		if (ptr[i] == haystack[i])
		{
			finded = &ptr[i];
			while (ptr[i] && haystack[i] && ptr[i] == haystack[i])
				i++;
			if (!haystack[i])
				return (finded);
		}
	}
	return (NULL);
}
