/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_group_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 11:50:54 by mgayduk           #+#    #+#             */
/*   Updated: 2018/03/06 13:33:16 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void    sort_vol3(t_list **a, t_list **b)
{
    (*b && (*b)-> next && VAL(b) < VAL_NEXT(b)) ? ss(*a, *b) : sa(*a);
    ra(a);
    sa(*a);
    rra(a);
    sa(*a); 
}
static void    sort_vol2(t_list **a, t_list **b)
{
    int top;
    int next;
    int bot;

    top = VAL(a);
    next = VAL_NEXT(a);
    bot = VAL_N_NEXT(a);

    if (P_120(top, next, bot))
    {   
        ra(a);
        (*b && (*b)-> next && VAL(b) < VAL_NEXT(b)) ? ss(*a, *b) : sa(*a);
        rra(a);
        sa(*a);
    }
    else if (P_201(top, next, bot))
    {
        (*b && (*b)-> next && VAL(b) < VAL_NEXT(b)) ? ss(*a, *b) : sa(*a);
        ra(a);
        sa(*a);
        rra(a);
    }
    else if (P_210(top, next, bot))
        sort_vol3(a, b);
}

static void    sort_3_nums(t_list **a, t_list **b)
{
    int top;
    int next;
    int bot;

    top = VAL(a);
    next = VAL_NEXT(a);
    bot = VAL_N_NEXT(a);
    if (P_021(top, next, bot))
    {
        ra(a);
        (*b && (*b)-> next && VAL(b) < VAL_NEXT(b)) ? ss(*a, *b) : sa(*a);
        rra(a);
    }
    else if (P_102(top, next, bot))
        (*b && (*b)-> next && VAL(b) < VAL_NEXT(b)) ? ss(*a, *b) : sa(*a);
    else
        sort_vol2(a, b);
}


int stack_sorted_a(t_list *a, int len)
{
    len--;
    while (len)
    {
        if (*((int *)a->content) > *((int *)a->next->content))
            return (0);
        a = a->next;
        len--;
    }
    return (1);
}

void       sort_group_a(t_list **a, t_list **b)
{
	int n;

	n = get_stack_len(*a);
    if (stack_sorted_a(*a, n))
        ;
    else if (n == 2)
        (*b && (*b)-> next && VAL(b) < VAL_NEXT(b)) ? ss(*a, *b) : sa(*a);
    else if (n == 3)
    {
        if (one_group_in_stack(a))
            sort_group_a_last(a, b);
        sort_3_nums(a, b);
    }
}
