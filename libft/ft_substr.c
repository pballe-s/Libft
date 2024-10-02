/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pballe-s <pballe-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:13:53 by pballe-s          #+#    #+#             */
/*   Updated: 2022/12/26 11:15:42 by pballe-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;
	size_t	size_s;

	size_s = ft_strlen(s);
	if (size_s < start)
	{
		new_str = (char *)malloc(sizeof(char));
		if (!new_str)
			return (NULL);
		*new_str = '\0';
		return (new_str);
	}
	if (len > size_s - start)
		return (ft_strdup((s + start)));
	new_str = (char *)malloc(len + 1);
	if (!s || !new_str)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}
