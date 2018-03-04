/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:39:56 by mgayduk           #+#    #+#             */
/*   Updated: 2018/03/04 15:51:13 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "input_error.h"
# include "ps_tools.h"

# define VAL(x) *((int *)(*x)->content)
# define VAL_NEXT(x) *((int *)(*x)->next->content)
# define VAL_N_NEXT(x) *((int *)(*x)->next->next->content)
# define FINISH 2148483647

t_list	*read_array(char *str);

/*
** helpers.c
*/
void	error(char *desc);
void	print_list(t_list *head);
void	btree_del(void *content, size_t content_size);
int		btree_cmp(void *cont1, void *cont2);
int		is_min(int x, int y, int z);

void	print_stacks(t_list *a, t_list *b);
void 	sort_stack(t_list *a);
int 	get_mediana(t_list *head, int len, int steps);
int		get_stack_len(t_list *a);
void    sort_group_a(t_list **a, t_list **b);
#endif