/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pballe-s <pballe-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:22:45 by pballe-s          #+#    #+#             */
/*   Updated: 2022/12/26 10:24:18 by pballe-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	str1 = dest;
	str2 = src;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*str1++ = *str2++;
		n--;
	}
	return (dest);
}
