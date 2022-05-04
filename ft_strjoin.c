/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:30:51 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/05/04 11:20:43 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*concat;
	unsigned int	i;

	concat = (char *)malloc(sizeof(s1) * (strlen(s1) + strlen(s2) + 1));
	i = 0;
	while (*s1 != '\0')
	{
		concat[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		concat[i] = *s2;
		i++;
		s2++;
	}
	concat[i] = '\0';
	return (concat);
}

/*
int	main(void)
{
	char	s1[];
	char	s2[];

	s1[] = "lorem ipsum";
	s2[] = "dolor sit amet";
	printf("%s", ft_strjoin(s1, s2));
	return (0);
}
*/