/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:35:44 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/30 10:35:44 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *head)
{
	t_list	*temp;
	int		counter;

	temp = head;
	counter = 0;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
