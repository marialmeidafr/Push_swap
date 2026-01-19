/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 19:58:49 by mariaalm          #+#    #+#             */
/*   Updated: 2026/01/19 15:30:50 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	char	**args;
	int		has_split;

	has_split = 0;
	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		has_split = 1;
	}
	else
		args = ++argv;
	if (!ft_checkall(args) || !ft_creat_stack(args, &a) || !ft_check_stack(&a))
	{
		ft_free_all(&a, &b, args, has_split);
		return (1);
	}
	ft_sort(&a, &b);
	ft_free_all(&a, &b, args, has_split);
}
