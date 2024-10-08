/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pballe-s <pballe-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:12:39 by pballe-s          #+#    #+#             */
/*   Updated: 2022/12/26 11:12:40 by pballe-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;

	end = ft_strlen (s1) - 1;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr (set, s1[start]))
		start++;
	while (end > start && ft_strchr (set, s1[end]))
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}
