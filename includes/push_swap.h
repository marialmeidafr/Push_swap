/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 18:01:12 by mariaalm          #+#    #+#             */
/*   Updated: 2026/01/19 15:30:50 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/Libft/libft.h"
# include <limits.h>

# define SA "sa\n"
# define SB "sb\n"
# define SS "ss\n"

# define RA "ra\n"
# define RB "rb\n"
# define RR "rr\n"

# define RRA "rra\n"
# define RRB "rrb\n"
# define RRR "rrr\n"

# define PA "pa\n"
# define PB "pb\n"

typedef struct s_stack
{
	long			value;
	int				index;
	struct s_stack	*next;
}					t_stack;

// checker
int					ft_checknumber(char *argv[]);
int					ft_checkrepeat(t_stack *head);
int					ft_checksorted(t_stack *head);
int					ft_checkall(char *argv[]);

// stack
t_stack				*ft_create_node(long value);
void				ft_stack_add_back(t_stack **head, t_stack *new);
int					ft_creat_stack(char *argv[], t_stack **head);
int					ft_check_stack(t_stack **head);
int					ft_size_stack(t_stack **head);
t_stack				*ft_get_min(t_stack **head);
t_stack				*ft_lastnode(t_stack **head);
t_stack				*ft_beforelastnode(t_stack **head);
void				ft_put_first_index(t_stack **head);
void				ft_put_index(t_stack **head, int size);

// sort
void				ft_sort(t_stack **a, t_stack **b);
void				ft_radix(t_stack **a, t_stack **b, int size);
void				ft_sort3(t_stack **a);
void				ft_sort4(t_stack **a, t_stack **b);
void				ft_sort5(t_stack **a, t_stack **b);
int					ft_get_bits(t_stack **head);

// operations
void				ft_swap(t_stack **head, char *str);
void				ft_rotate(t_stack **head, char *str);
void				ft_reverse_rotate(t_stack **head, char *str);
void				ft_push(t_stack **src, t_stack **dest, char *str);

// free
void				ft_free_stack(t_stack **head);
void				ft_free_all(t_stack **a, t_stack **b, char **split,
						int flag);

#endif