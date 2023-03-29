/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:03:08 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/25 10:03:08 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		j;
	char	*dup_str;

	i = 0;
	while (str[i])
		i++;
	dup_str = malloc(sizeof(char) * (i + 1));
	if (!dup_str)
		return (NULL);
	j = 0;
	while (j < i)
	{
		dup_str[j] = (char)str[j];
		j++;
	}
	dup_str[j] = '\0';
	return (dup_str);
}
