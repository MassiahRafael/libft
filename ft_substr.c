/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:25:37 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/13 16:22:22 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (ft_strlen(s) < start)
	{
		str = malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	str = (char *)malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
