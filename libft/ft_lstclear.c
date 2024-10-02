/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pballe-s <pballe-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:24:35 by pballe-s          #+#    #+#             */
/*   Updated: 2022/12/22 19:25:43 by pballe-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*prox;

	aux = *lst;
	if (!del)
		return ;
	if (lst)
	{
		while (aux != NULL)
		{
			prox = aux->next;
			del(aux->content);
			free(aux);
			aux = prox;
		}
		*lst = NULL;
	}
}
