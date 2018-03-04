/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_a_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 18:00:54 by mgayduk           #+#    #+#             */
/*   Updated: 2018/03/04 19:24:50 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void     put_back_a(t_list **a, int ret_back)
{
    if (one_group_in_stack(a))
        return ;
	while (ret_back)
	{
		rra(a);
		ret_back--;
	}
}

void	        compute_a_stack(t_list **a, t_list **b)
{
	int len;
	int med;
	int count;
    int ret_back;

    print_stacks(*a, *b);
	len = get_stack_len(*a);
	if (len <= 3)
	{
		sort_group_a(a, b);
		return ;
	}
	count = len / 2;
	med = get_mediana(*a, len, len % 2 ? len / 2 + 1 : len / 2);
    print_stacks(*a, *b);
	ft_printf("Mediana is %i\n", med);
    ret_back = 0;
	while (count)
	{
		if ((len % 2 == 0 && VAL(a) > med) || (len % 2 == 1 && VAL(a) >= med))
        {
            ret_back++;
			ra(a);
        }
		else
		{
			(*a)->content_size = med;
			pb(a, b);
			count--;
		}
		print_stacks(*a, *b);
	}
    put_back_a(a, ret_back);
    print_stacks(*a, *b);
	compute_a_stack(a, b);
    print_stacks(*a, *b);
}