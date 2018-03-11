/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:36:16 by mgayduk           #+#    #+#             */
/*   Updated: 2018/03/11 13:51:26 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	t_flags	flags;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (write(2, "Usage: ./push_swap [flags][array]\n", 34));
	argv++;
	flags = parse_flags(&argv);
	if (flags.h)
		print_help_ps();
	if (!*argv)
		return (write(2, "Usage: ./push_swap [flags][array]\n", 34));
	a = (ft_len_strarr(argv) == 1) ? parse_string(*argv, flags) :
									parse_args(argv, flags);
	sort_stack(&a, &b);
	ft_lst_erase(a);
	return (0);
}
