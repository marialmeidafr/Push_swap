/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 19:52:59 by mariaalm          #+#    #+#             */
/*   Updated: 2026/01/14 20:15:24 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void ft_free_stack(t_stack **head)
{
    t_stack *tmp;

    while(*head)
    {
        tmp = *head;
        *head = (*head)->next;        
        free(tmp);
    }
}
