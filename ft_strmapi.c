/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:24:14 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/05/07 14:55:01 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (s == 0)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
 char my_func(unsigned int i, char str)
** {
** 	printf("My inner function: index = %d and %c\n", i, str);
** 	return str - 32;
** }
**
** int main()
** {
** 	char str[10] = "hello.";
** 	printf("The result is %s\n", str);
** 	char *result = ft_strmapi(str, my_func);
** 	printf("The result is %s\n", result);
** 	return 0;
** }*/