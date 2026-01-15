/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 19:58:49 by mariaalm          #+#    #+#             */
/*   Updated: 2026/01/15 19:58:50 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

//REMOVER DEPOIR
void    ft_print_stack(t_stack **head)
{
    t_stack *tmp;

    tmp = *head;
    while(tmp)
    {
        printf("%ld\n", tmp->value);
        tmp = tmp->next;
    }
}

int main(int argc, char *argv[])
{
    t_stack *a;
    t_stack *b;
    char **args;

    a = NULL;
    b = NULL;
    if (argc < 2)
        return (0);
    if (argc == 2)
        args = ft_split(argv[1], ' ');
    else
        args = ++argv;
    if (!ft_checkall(argc, args))
        return (1);
    if (!ft_create_stack(args, &a))
        return (1);
    if (!ft_check_stack(&a))
        return (1);
    printf("ANTES ------------------------------\n"); //TIRAR DEPOIS
    ft_print_stack(&a); //TIRAR DEPOIS
    ft_sort(&a, &b);
    printf("DEPOIS -----------------------------\n"); //TIRAR DEPOIS
    ft_print_stack(&a); //TIRAR DEPOIS
}
