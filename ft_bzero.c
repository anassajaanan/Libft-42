/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:22:00 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/26 17:22:00 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

void	ft_bzero(void *str, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		((unsigned char *)str)[i] = '\0';
		i++;
	}
}
