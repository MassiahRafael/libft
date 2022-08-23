/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:33:26 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/13 12:01:52 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*to_find;

	to_find = (char *)str;
	i = 0;
	while (to_find[i] != (char)c)
	{
		if (to_find[i] == '\0')
			return (0);
		i++;
	}
	return (&to_find[i]);
}
