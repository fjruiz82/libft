/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:22:39 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/05/01 11:41:11 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cc;

	str = (unsigned char *)s;
	cc = c;
	while (n > 0)
	{
		if (*str == cc)
			return (str);
		str++;
		n--;
	}
	return (0);
}
