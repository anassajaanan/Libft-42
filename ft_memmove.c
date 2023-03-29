/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:06:24 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/26 13:06:24 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	i = 0;
	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	if (dest < src)
	{
		while (i < num)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	else
	{
		while (num > 0)
		{
			ptrd[num - 1] = ptrs[num - 1];
			num--;
		}
	}
	return (dest);
}
