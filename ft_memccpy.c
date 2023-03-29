/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:59:52 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/26 14:59:52 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	size_t			i;
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	i = 0;
	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	while (i < num && ptrs[i] != (unsigned char)c)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	if (i == num)
		return (NULL);
	else
	{
		ptrd[i] = (unsigned char)c;
		return (ptrd + i + 1);
	}	
}
