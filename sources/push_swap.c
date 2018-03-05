/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:36:16 by mgayduk           #+#    #+#             */
/*   Updated: 2018/03/05 14:15:23 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		len;

	a = NULL;
	b = NULL;
	if (argc != 2)
		return (write(2, "Usage: ./push_swap [array]\n", 27));
	a = read_array(argv[1]);
	print_stacks(a, b);
	sort_stack(&a, &b);
	print_stacks(a, b);
	len = ft_lstlen(a);
	if (stack_sorted_a(a, len))
		ft_printf(GREEN "STACK SORTED\n" RESET);
	else
		ft_printf(GREEN "STACK -=NOT=- SORTED\n" RESET);
	ft_lst_erase(a);
	return (0);
}
