/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:20:34 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/26 18:20:34 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	sub_len;

	i = 0;
	sub_len = 0;
	while (sub[sub_len])
		sub_len++;
	if (sub_len == 0)
		return ((char *)str);
	if (len == 0)
		return (NULL);
	while (str[i] && i < len - sub_len + 1)
	{
		j = 0;
		while (str[i + j] && sub[j] && str[i + j] == sub[j])
			j++;
		if (sub[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
