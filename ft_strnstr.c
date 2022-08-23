/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:06:41 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/13 15:26:51 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	si;
	size_t	fi;
	char	*finded;

	finded = (char *)str;
	if (find[0] == '\0')
		return (finded);
	si = 0;
	while (str[si] && si < n)
	{
		fi = 0;
		while (str[si + fi] && find[fi]
			&& si + fi < n && str[si + fi] == find[fi])
			fi++;
		if (find[fi] == '\0')
			return (finded + si);
		si++;
	}
	return (NULL);
}
