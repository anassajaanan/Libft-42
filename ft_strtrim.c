/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:23:20 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/27 12:23:20 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*new_str;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_set(s1[start], set))
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	while (s1[end] && is_set(s1[end], set))
		end--;
	new_str = malloc(sizeof(char) * (end - start + 2));
	if (new_str == NULL)
		return (NULL);
	while (i < (end - start + 1))
	{
		new_str[i] = s1[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
