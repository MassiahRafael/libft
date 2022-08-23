/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:39:12 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/07 11:11:18 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	size_t	total;
	void	*ptr;

	total = number * size;
	ptr = malloc(total);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
