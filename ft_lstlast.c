/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:38:44 by marvin            #+#    #+#             */
/*   Updated: 2025/02/01 16:38:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lastnode;

	if (!lst)
		return (NULL);
	lastnode = lst;
	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	return (lastnode);
}
