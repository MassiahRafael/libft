/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:03:07 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/10 19:48:42 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*cp;
	const char	*sp;
	size_t		i;

	cp = dst;
	sp = src;
	i = 0;
	while (i < n)
	{
		cp[i] = sp[i];
		i++;
	}
	return (dst);
}
