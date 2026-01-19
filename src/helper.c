/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:03:41 by mariaalm          #+#    #+#             */
/*   Updated: 2026/01/19 15:27:51 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_lastnode(t_stack **head)
{
	t_stack	*tmp;

	tmp = (*head);
	if (tmp == NULL)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

t_stack	*ft_beforelastnode(t_stack **head)
{
	t_stack	*tmp;

	tmp = (*head);
	if (tmp == NULL)
		return (NULL);
	while (tmp->next->next)
		tmp = tmp->next;
	return (tmp);
}

int	ft_get_bits(t_stack **head)
{
	t_stack	*tmp;
	int		max;
	int		bits;

	tmp = *head;
	bits = 0;
	max = tmp->index;
	while (tmp)
	{
		if (max < tmp->index)
			max = tmp->index;
		tmp = tmp->next;
	}
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	ft_put_first_index(t_stack **head)
{
	t_stack	*tmp;
	int		min;

	tmp = *head;
	min = tmp->value;
	while (tmp)
	{
		if (min > tmp->value)
			min = tmp->value;
		tmp = tmp->next;
	}
	tmp = *head;
	while (tmp->value != min)
		tmp = tmp->next;
	tmp->index = 0;
	ft_put_index(head, 1);
}

void	ft_put_index(t_stack **head, int index)
{
	t_stack	*tmp;
	int		min;

	tmp = *head;
	while (tmp->index != -1 && tmp->next)
		tmp = tmp->next;
	if (tmp->index != -1)
		return ;
	min = tmp->value;
	while (tmp)
	{
		if (min > tmp->value && tmp->index == -1)
			min = tmp->value;
		tmp = tmp->next;
	}
	tmp = *head;
	while (tmp->value != min)
		tmp = tmp->next;
	tmp->index = index;
	ft_put_index(head, ++index);
}
