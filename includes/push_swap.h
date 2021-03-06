/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:39:56 by mgayduk           #+#    #+#             */
/*   Updated: 2018/03/15 15:32:07 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ps_tools.h"
# include <limits.h>

typedef	struct	s_flags
{
	short		v;
	short		s;
	short		e;
	short		h;
}				t_flags;

# define VAL(x) *((int *)(*x)->content)
# define VAL_NEXT(x) *((int *)(*x)->next->content)
# define VAL_N_NEXT(x) *((int *)(*x)->next->next->content)

# define P_012(top, next, bot) (top < next && next < bot && bot > top) ? 1 : 0
# define P_021(top, next, bot) (top < next && next > bot && bot > top) ? 1 : 0
# define P_102(top, next, bot) (top > next && next < bot && bot > top) ? 1 : 0
# define P_120(top, next, bot) (top < next && next > bot && bot < top) ? 1 : 0
# define P_201(top, next, bot) (top > next && next < bot && bot < top) ? 1 : 0
# define P_210(top, next, bot) (top > next && next > bot && bot < top) ? 1 : 0

void			check_type(char **arr, t_flags flags);
void			check_values(t_list *head, t_flags flags);
void			check_duplicates(t_list *head, t_flags flags);

t_flags			parse_flags(char ***args);
t_flags			parse_flags_ps(char ***args);
t_list			*parse_string(char *str, t_flags flags);
t_list			*parse_args(char **args, t_flags flags);
void			read_stat(char *line, int stats[11]);
void			print_stats(int stats[11]);
void			print_help(void);
void			print_help_ps(void);

void			error(char *desc);
void			print_list(t_list *head);
void			btree_del(void *content, size_t content_size);
int				btree_cmp(void *cont1, void *cont2);
int				is_min(int x, int y, int z);

void			print_stacks(t_list *a, t_list *b);
void			sort_stack(t_list **a, t_list **b);
void			compute_a_stack(t_list **a, t_list **b);
void			compute_b_stack(t_list **a, t_list **b);
int				get_mediana(t_list *head, int len, int steps);
int				get_stack_len(t_list *a);
int				one_group_in_stack(t_list **a);
void			sort_group_a(t_list **a, t_list **b);
void			sort_group_a_last(t_list **a, t_list **b);
void			sort_group_b(t_list **a, t_list **b);
int				stack_sorted_a(t_list *a, int len);

#endif
