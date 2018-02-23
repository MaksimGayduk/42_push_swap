/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 18:40:30 by mgayduk           #+#    #+#             */
/*   Updated: 2018/02/23 20:33:45 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_stack(t_list *a)
{
	t_list *b;
	int len;
	int med;

	while (a->next)
	{
		med = get_mediana(a);
		len = (int)ft_lstlen(a);
		ft_printf("Mediana is %i\n", med);
		while (len)
		{
			if (a && a->next && VAL(a) > VAL(a->next))
				sa(a);
			if (b && b->next && VAL(b) < VAL(b->next))
				sb(b);
			if (VAL(a) >= med)
				ra(&a);
			else
				pb(&a, &b);
			if (b && b->next && VAL(b) > VAL(b->next))
				sb(b);
			len--;
			print_stacks(a, b);
		}
	}
	while (b)
	{
		if (b && b->next && VAL(b) < VAL(b->next))
				sb(b);
		pa(&a, &b);
		if (a && a->next && VAL(a) > VAL(a->next))
			sa(a);
		print_stacks(a, b);
	}
	
}