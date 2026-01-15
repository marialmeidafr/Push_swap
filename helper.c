/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:03:41 by mariaalm          #+#    #+#             */
/*   Updated: 2026/01/15 17:05:01 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

t_stack	*ft_lastnode(t_stack **head)
{
    t_stack *tmp;

    tmp = (*head);
	if (tmp == NULL)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

t_stack	*ft_beforelastnode(t_stack **head)
{
    t_stack *tmp;

    tmp = (*head);
	if (tmp == NULL)
		return (NULL);
	while (tmp->next->next)
		tmp = tmp->next;
	return (tmp);
}