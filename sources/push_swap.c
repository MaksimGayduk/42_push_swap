/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:36:16 by mgayduk           #+#    #+#             */
/*   Updated: 2018/03/07 11:04:16 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (write(2, "Usage: ./push_swap [array]\n", 27));
	else if (argc == 2)
		a = parse_string(argv[1]);
	else
		a = parse_args(argv);
	sort_stack(&a, &b);
	ft_lst_erase(a);
	return (0);
}
