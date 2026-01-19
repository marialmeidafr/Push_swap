/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 12:38:26 by mariaalm          #+#    #+#             */
/*   Updated: 2026/01/19 15:26:20 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_checknumber(char *argv[])
{
	int	i;
	int	j;

	j = 0;
	while (argv[j])
	{
		i = 0;
		if (argv[j][i] == '-' || argv[j][i] == '+')
			i++;
		if (argv[j][i] == '\0')
			return (0);
		while (argv[j][i])
		{
			if (!ft_isdigit(argv[j][i]))
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

int	ft_checkrepeat(t_stack *head)
{
	t_stack	*tmp;

	while (head)
	{
		tmp = head->next;
		while (tmp)
		{
			if (tmp->value == head->value)
				return (0);
			tmp = tmp->next;
		}
		head = head->next;
	}
	return (1);
}

int	ft_checksorted(t_stack *head)
{
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

int	ft_checkall(char *argv[])
{
	int		i;
	long	nbr;

	if (!ft_checknumber(argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	i = 0;
	while (argv[i])
	{
		nbr = ft_atol(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_stack(t_stack **head)
{
	t_stack	*tmp;

	tmp = *head;
	if (!tmp)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (!ft_checkrepeat(tmp))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (ft_checksorted(tmp))
	{
		return (0);
	}
	return (1);
}
