/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pballe-s <pballe-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:50:17 by pballe-s          #+#    #+#             */
/*   Updated: 2022/12/26 10:51:06 by pballe-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	i;

	i = ft_strlen(s);
	s2 = (char *)malloc(i + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s, i + 1);
	return (s2);
}
