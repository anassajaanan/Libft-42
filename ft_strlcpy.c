/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:27:30 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/25 10:27:30 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (size != 0)
	{
		while (j < size - 1 && src[j])
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}
