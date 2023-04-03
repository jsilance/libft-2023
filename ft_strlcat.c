/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:07:18 by jusilanc          #+#    #+#             */
/*   Updated: 2023/04/03 16:34:44 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = -1;
	if (!dst || !src)
		return (0);
	while (*dst)
		dst++;
	while (*src && ++i < dstsize)
		*dst++ = *src++;
	*(--dst) = '\0';
	return (ft_strlen(src));
}
