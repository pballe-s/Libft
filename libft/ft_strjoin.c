/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pballe-s <pballe-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:53:32 by pballe-s          #+#    #+#             */
/*   Updated: 2022/12/26 10:55:12 by pballe-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*nova_s;

	i = 0;
	j = 0;
	nova_s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !nova_s)
		return (NULL);
	while (s1[i] != '\0')
	{
		nova_s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		nova_s[i] = s2[j];
		j++;
		i++;
	}
	nova_s[i] = '\0';
	return (nova_s);
}
