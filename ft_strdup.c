/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:44:50 by jusilanc          #+#    #+#             */
/*   Updated: 2023/04/05 19:03:32 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*ptr;

	if (str)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen((char *)str) + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, (char *)str, ft_strlen((char *)str));
	ptr[ft_strlen((char *)str)] = 0;
	return (ptr);
}
