/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:51:32 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/05/13 14:50:58 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	slen;

	slen = ft_strlen(s);
	write(fd, s, slen);
	write(fd, "\n", 1);
}
