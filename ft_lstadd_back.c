/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:47:55 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/30 10:47:55 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **head, t_list *new)
{
	t_list	*last_node;

	if (!new)
		return ;
	new->next = NULL;
	if (!(*head))
	{
		(*head) = new;
		return ;
	}
	last_node = ft_lstlast(*head);
	last_node->next = new;
}
