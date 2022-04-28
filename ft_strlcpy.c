/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:25:47 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/04/26 12:28:56 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

unsigned int	ft_strlcpy(char *dest, const char *src,
		size_t size)
{
	char			*cdest;
	const char		*csrc;
	unsigned int	i;

	cdest = dest;
	csrc = src;
	if (size == 0)
	{
		return (ft_strlen(csrc));
	}
	i = 0;
	while (i < size - 1 && csrc[i] != '\0')
	{
		cdest[i] = csrc[i];
		i++;
	}
	cdest[i] = '\0';
	return (ft_strlen(csrc));
}
