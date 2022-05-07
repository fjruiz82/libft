/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:32:44 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/05/07 19:05:00 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*x;

	x = (t_list *)malloc(sizeof(t_list));
	if (x == 0)
		return (0);
	x->content = content;
	x->next = 0;
	return (x);
}

/*
*(x.content) = content;
*(x.next) = NULL;
*/
/*
t_list	*new_element;
	new_element = malloc(sizeof(t_list));
	if (new_element == NULL)
		return (NULL);
	new_element->next = NULL;
	new_element->content = content;
	return (new_element);
*/