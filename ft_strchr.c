/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:06:30 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/04/28 14:18:02 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		s_len;

	s_len = ft_strlen(s);
	str = (char *)s;
	i = 0;
	if (c == 0)
		return (&str[s_len]);
	while (str[i] != '\0')
	{
		if (str[i] != c)
			i++;
		else if (str[i] == c)
			return (&str[i]);
	}
	return (0);
}
