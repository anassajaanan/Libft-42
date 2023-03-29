/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:30:16 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/27 14:30:16 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		stop;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = get_num_len(n);
	stop = 0;
	if (n < 0)
	{
		n *= -1;
		stop = 1;
		i = get_num_len(n) + 1;
	}
	res = malloc(sizeof(char) * (i + 1));
	res[i] = '\0';
	res[0] = '-';
	while (i > stop)
	{
		res[i - 1] = (n % 10) + '0';
		n /= 10;
		i--;
	}		
	return (res);
}
