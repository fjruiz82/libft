/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 07:35:02 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/05/07 15:46:23 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst != NULL)
		new->next = *lst;
	*lst = new;
}

/*if (new)
	{
		new->next = *lst;
		*lst = new;
	}*/

/*if (alst == (t_list **)NULL || new == (t_list *)NULL)
		return ;
	new->next = *alst;
	*alst = new;*/

/*{
	if (*alst)
		new->next = *alst;
	*alst = new;
}*/

/*void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new && alst)
	{
		new->next = *alst;
		*alst = new;
	}
}*/
