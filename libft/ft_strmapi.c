/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pballe-s <pballe-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:02:44 by pballe-s          #+#    #+#             */
/*   Updated: 2022/12/26 11:06:11 by pballe-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*apos;
	int		size;

	i = 0;
	size = ft_strlen(s);
	apos = malloc(size * sizeof(char) + 1);
	if (!apos)
		return (NULL);
	while (i < size)
	{
		apos[i] = f(i, s[i]);
		i++;
	}
	apos[i] = '\0';
	return (apos);
}
