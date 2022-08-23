/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:54:50 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/08 11:19:44 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	count;
	int	num;

	num = n;
	count = 0;
	if (n <= 0)
		count = 1;
	while (num != 0)
	{
		count ++;
		num = num / 10;
	}
	return (count);
}

static char	*ft_zero(int n, char *str)
{
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*str;

	count = ft_size(n);
	str = (char *)malloc (count + 1);
	if (!str)
		return (NULL);
	ft_zero(n, str);
	str[count] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[1] = '2';
			n = -147483648;
		}
		n = -n;
	}
	while (n != 0)
	{
		str[--count] = (n % 10 + '0');
		n = n / 10;
	}
	return (str);
}
