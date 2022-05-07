/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:43:09 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/05/07 18:36:45 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = strlen(str) - 1;
	while (j > i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		is_neg;
	char	*temp;

	i = 0;
	is_neg = 0;
	temp = malloc(sizeof(char) * 12);
	if (temp == 0)
		return (0);
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return (temp = "0");
	if (n < 0)
	{
		is_neg = 1;
		n *= -1;
	}
	while (n > 0)
	{
		temp[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	if (is_neg == 1)
		temp[i] = '-';
	return (ft_strrev(temp));
}

/*
int	main(void)
{
	printf("%s", ft_itoa(2147483648LL));
	return (0);
}
*/