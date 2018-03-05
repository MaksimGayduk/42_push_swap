/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 18:40:30 by mgayduk           #+#    #+#             */
/*   Updated: 2018/03/05 13:11:07 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	compute_b_stack(t_list **a, t_list **b);

int		get_stack_len(t_list *a)
{
	int len;

	len = 0;
	while (a)
	{
		len++;
		if (a->next && a->content_size != a->next->content_size)
			break;
		a = a->next;
	}
	return (len);
}

int      one_group_in_stack(t_list **a)
{
    t_list *temp;

    temp = *a;
    if (!temp)
        return (1);
    while (temp->next)
    {
        if (temp->content_size != temp->next->content_size)
            return (0);
        temp = temp->next;    
    }
    return (1);
}

void	sort_stack(t_list **a)
{
	t_list *b;
	int len;

	b = NULL;
	print_stacks(*a, b);
	compute_a_stack(a, &b);
	compute_b_stack(a, &b);
	print_stacks(*a, b);
	len = ft_lstlen(*a);
	if (stack_sorted(*a, len))
		ft_printf(GREEN "STACK SORTED\n" RESET);
	else
		ft_printf(GREEN "STACK -=NOT=- SORTED\n" RESET);
}