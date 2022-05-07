/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:21:29 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/05/07 14:12:07 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (0);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (len >= 0 && ft_strchr(set, s1[len]))
		len--;
	str = ft_substr(&s1[i], 0, len + 1 - i);
	if (str == NULL)
		return (NULL);
	//str[len + 1] = '\0';
	str[ft_strlen(str) + 1] = '\0';
	return (str);
}

/*
int main ()
{
	char	*s1;
	char	*s2;

	
  s1 = "  \t \t \n   \n\n\n\t";
	s2 = "";
    printf("%s", ft_strtrim(s1,s2));
    return (0);
}
*/