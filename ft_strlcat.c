/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 07:47:00 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/25 07:47:00 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (destsize == 0 || destsize <= i)
		return (destsize + j);
	while (src[k] && k < destsize - i - 1)
	{
		dest[i + k] = (char)src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (i + j);
}
