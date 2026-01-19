/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:00:46 by mariaalm          #+#    #+#             */
/*   Updated: 2026/01/19 12:09:00 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(t_stack **head, char *str)
{
	t_stack	*new_first;
	t_stack	*new_second;
	t_stack	*new_third;

	if (ft_size_stack(head) < 2)
		return ;
	new_first = (*head)->next;
	new_second = (*head);
	new_third = (*head)->next->next;
	*head = new_first;
	new_first->next = new_second;
	new_second->next = new_third;
	ft_putstr_fd(str, 1);
}

void	ft_rotate(t_stack **head, char *str)
{
	t_stack	*new_first;
	t_stack	*new_last;
	t_stack	*last;

	new_first = (*head)->next;
	new_last = (*head);
	last = ft_lastnode(head);
	*head = new_first;
	last->next = new_last;
	new_last->next = NULL;
	ft_putstr_fd(str, 1);
}

void	ft_reverse_rotate(t_stack **head, char *str)
{
	t_stack	*new_first;
	t_stack	*new_last;
	t_stack	*first;

	first = *head;
	new_first = ft_lastnode(head);
	new_last = ft_beforelastnode(head);
	*head = new_first;
	new_first->next = first;
	new_last->next = NULL;
	ft_putstr_fd(str, 1);
}

void	ft_push(t_stack **src, t_stack **dest, char *str)
{
	t_stack	*from;
	t_stack	*receive;
	t_stack	*tmp;

	if (src == NULL || *src == NULL)
		return ;
	from = *src;
	receive = *dest;
	tmp = from->next;
	if (receive == NULL)
	{
		from->next = NULL;
		*dest = from;
		*src = tmp;
	}
	else
	{
		from->next = receive;
		*dest = from;
		*src = tmp;
	}
	ft_putstr_fd(str, 1);
}
