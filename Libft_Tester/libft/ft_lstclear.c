/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:06:51 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/30 11:06:51 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **head, void (*del)(void *))
{
	t_list	*temp;

	if (!del || !head)
		return ;
	while (*head)
	{
		temp = (*head)->next;
		ft_lstdelone(*head, del);
		*head = temp;
	}
}
