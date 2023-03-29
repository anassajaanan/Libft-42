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
	size_t	src_len;
	size_t	dest_len;
	size_t	k;

	if (src == NULL && dest == NULL)
		return (0);
	src_len = ft_strlen(src);
	if (destsize == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (destsize == 0 || destsize <= dest_len)
		return (destsize + src_len);
	k = 0;
	while (src[k] && k < destsize - dest_len - 1)
	{
		dest[dest_len + k] = (char)src[k];
		k++;
	}
	dest[dest_len + k] = '\0';
	return (src_len + dest_len);
}
