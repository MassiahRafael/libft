/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:00:00 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/07 09:39:52 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*to_find;
	char	*ret;

	ret = 0;
	to_find = (char *)str;
	i = 0;
	while (i <= (int)ft_strlen(str))
	{
		if (to_find[i] == (char)c)
			ret = (&to_find[i]);
		i++;
	}
	return (ret);
}
