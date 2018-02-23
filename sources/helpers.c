/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:56:17 by mgayduk           #+#    #+#             */
/*   Updated: 2018/02/23 15:05:45 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(char *desc)
{
	if (!desc)
		exit(ft_printf(RED "%&Error\n" RESET, 2));
	else
		exit(ft_printf(RED "%&Error: %s\n" RESET, 2, desc));
}

void	memory_error(void)
{
	exit(ft_printf(RED "%&Memory allocation failed\n" RESET, 2));
}

void	print_list(t_list *head)
{
	while (head)
	{
		printf("%i\n", *((int *)head->content));
		head = head->next;
	}
}
