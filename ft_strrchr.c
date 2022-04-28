/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:26:51 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/04/27 13:03:01 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*scp;
	int		i;

	scp = (char *)s;
	i = 0;
	while (scp[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (scp[i] == c)
			return (&scp[i]);
		i--;
	}
	return (0);
}
