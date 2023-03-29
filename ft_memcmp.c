/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:44:00 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/26 10:44:00 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *) ptr1;
	p2 = (unsigned char *) ptr2;
	while (i < num && p1[i] == p2[i])
		i++;
	if (i == num)
		return (0);
	return ((int)(p1[i] - p2[i]));
}
