/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 18:01:12 by mariaalm          #+#    #+#             */
/*   Updated: 2025/12/12 18:44:51 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/Libft/libft.h"

typedef struct s_stack
{
	long            value;
	int             index;
	struct s_stack *next;
}   t_stack;


#endif