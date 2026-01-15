/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 20:22:49 by mariaalm          #+#    #+#             */
/*   Updated: 2026/01/15 13:49:54 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

t_stack *ft_create_node(long value)
{
    t_stack *node;

    node = malloc(sizeof(t_stack));
    if(!node)
        return (NULL);
    node->value = value;
    node->index = -1;
    node->next = NULL;
    return (node);
}

void ft_stack_add_back(t_stack **head, t_stack *new)
{
    t_stack *tmp;

    if(!*head)
    {
        *head = new;
        return ;
    }
    tmp = *head;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
}

int ft_create_stack(char *argv[], t_stack **head)
{
    int i;
    t_stack *node;

    i = 0;
    while(argv[i])
    {
        node = ft_create_node(ft_atol(argv[i]));
        if(!node)
        {
		    ft_free_stack(head);
            return (0);
        }
        ft_stack_add_back(head, node);
        i++;
    }
    return (1);
}

int ft_size_stack(t_stack **head)
{
    t_stack *tmp;
    int size;
    
    size = 0;
    tmp = *head;
    while(tmp)
    {
        tmp = tmp->next;
        size++;
    }
    return (size);
}

t_stack *ft_get_min(t_stack **head)
{
    t_stack *tmp;
    t_stack *min;

    tmp = *head;
    min = *head;
    while(tmp)
    {
        if (tmp->value < min->value)
            min = tmp;
        tmp = tmp->next;
    }
    return (min);
}
