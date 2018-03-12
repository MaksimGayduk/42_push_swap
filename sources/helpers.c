/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:56:17 by mgayduk           #+#    #+#             */
/*   Updated: 2018/03/12 13:04:23 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(char *desc)
{
	if (!desc)
		exit(ft_printf("%&Error\n", 2));
	else
		exit(ft_printf(RED "%&Error: %s\n" RESET, 2, desc));
}

void	btree_del(void *content, size_t content_size)
{
	ft_bzero(content, content_size);
	free(content);
}

int		btree_cmp(void *cont1, void *cont2)
{
	if (*((int *)cont1) < *((int *)cont2))
		return (-1);
	else if (*((int *)cont1) == *((int *)cont2))
		return (0);
	else
		return (1);
}

int		is_min(int x, int y, int z)
{
	if (x < y && x < z)
		return (1);
	else
		return (0);
}
