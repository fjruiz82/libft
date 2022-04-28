/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:23:50 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/04/26 12:23:57 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	unsigned int	i;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	i = 0;
	while ((cs1[i] != '\0' || cs2[i] != '\0') && i < n)
	{
		if (cs1[i] > cs2[i])
		{
			return (1);
		}
		else if (cs1[i] < cs2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
