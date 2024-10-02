/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pballe-s <pballe-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:10:42 by pballe-s          #+#    #+#             */
/*   Updated: 2022/12/22 19:10:43 by pballe-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	slots;
	void	*mem;

	slots = size * nmemb;
	mem = malloc(slots);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, slots);
	return (mem);
}
