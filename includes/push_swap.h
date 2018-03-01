/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:39:56 by mgayduk           #+#    #+#             */
/*   Updated: 2018/03/01 16:21:11 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "input_error.h"
# include "ps_tools.h"

# define VAL(x) *((int *)(*x)->content)
# define VAL_NEXT(x) *((int *)(*x)->next->content)
# define IS_MIN(x, y, z) (x <= y && x <= z) ? 1 : 0
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
#endif