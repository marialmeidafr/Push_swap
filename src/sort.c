/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 20:21:13 by mariaalm          #+#    #+#             */
/*   Updated: 2026/01/19 15:28:32 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_size_stack(a);
	if (size <= 5)
	{
		if (size == 2)
			ft_swap(a, SA);
		if (size == 3)
			ft_sort3(a);
		if (size == 4)
			ft_sort4(a, b);
		if (size == 5)
			ft_sort5(a, b);
	}
	else
		ft_radix(a, b, size);
}

void	ft_radix(t_stack **a, t_stack **b, int size)
{
	int		max_bits;
	int		i;
	int		bits;
	t_stack	*tmp;

	ft_put_first_index(a);
	max_bits = ft_get_bits(a);
	bits = 0;
	while (!ft_checksorted(*a) && bits < max_bits)
	{
		i = 0;
		while (i < size)
		{
			tmp = *a;
			if (((tmp->index >> bits) & 1) == 1)
				ft_rotate(a, RA);
			else
				ft_push(a, b, PB);
			i++;
		}
		while (*b)
			ft_push(b, a, PA);
		bits++;
	}
}

void	ft_sort3(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = *a;
	second = first->next;
	third = second->next;
	if (first->value > second->value && first->value > third->value)
		ft_rotate(a, RA);
	else if (second->value > first->value && second->value > first->value)
		ft_reverse_rotate(a, RRA);
	if ((*a)->value > (*a)->next->value)
		ft_swap(a, SA);
}

void	ft_sort4(t_stack **a, t_stack **b)
{
	t_stack	*min;

	min = ft_get_min(a);
	while ((*a) != min)
		ft_rotate(a, RA);
	if (ft_checksorted(*a))
		return ;
	ft_push(a, b, PB);
	ft_sort3(a);
	ft_push(b, a, PA);
}

void	ft_sort5(t_stack **a, t_stack **b)
{
	t_stack	*min;

	min = ft_get_min(a);
	while ((*a) != min)
		ft_rotate(a, RA);
	if (ft_checksorted(*a))
		return ;
	ft_push(a, b, PB);
	ft_sort4(a, b);
	ft_push(b, a, PA);
}
