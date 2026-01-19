/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 19:52:59 by mariaalm          #+#    #+#             */
/*   Updated: 2026/01/19 15:21:49 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free_stack(t_stack **head)
{
	t_stack	*tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}

void	ft_free_all(t_stack **a, t_stack **b, char **split, int flag)
{
	int	i;

	ft_free_stack(a);
	ft_free_stack(b);
	if (flag)
	{
		i = 0;
		while (split[i])
		{
			if (split[i])
			{
				free(split[i]);
				split[i] = NULL;
			}
			i++;
		}
		if (split)
			free(split);
	}
	split = NULL;
}
