/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:14:35 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/05/07 19:26:35 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (start >= ft_strlen(s))
	{
		sub = malloc(0);
		return (sub);
	}
	if (sub == 0)
		return (0);
	i = 0;
	while (i < start)
	{
		s++;
		i++;
	}
	j = 0;
	while (j < len)
	{
		sub[j] = *s;
		s++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}

/*
int	main(void)
{
	char *str = "lorem ipsum dolor sit amet";
	printf("%s", ft_substr(str, 0, 10));
	return (0);
}*/