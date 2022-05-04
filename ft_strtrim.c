/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:21:29 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/05/04 17:50:37 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int i;
    int len;


    while (s1[i] != '\0' && strchr(set, s1[i]))
        i++;
    len = strlen(s1);
    while (len > 0 && strchr(set, s1[len]))
        len--;
    str = (char *)s1;
    str = ft_substr(&s1[i], 0, len +1);
    return (str);
}

int main ()
{
    char str[] = "  Asdf qwer zxcv  ";
    char set[] = " ";
    printf("%s", ft_strtrim(str,set));
    return (0);
}