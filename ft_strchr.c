/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:06:30 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/04/28 12:24:13 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;
	char			*str;
	int				i;

	cc = (const char *)c;
	str = (char *)s;
	i = 0;
	while (str[i] != cc && str[i] != '\0')
		i++;
	if (str[i] == cc)
		return (str);
	return (0);
}
