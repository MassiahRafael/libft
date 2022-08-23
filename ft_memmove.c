/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:24:05 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/13 10:04:21 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	char		*cp;
	const char	*sp;

	cp = dst;
	sp = src;
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			cp[i] = sp[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			cp[i] = sp[i];
			i++;
		}
	}
	return (dst);
}
