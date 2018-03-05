/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tools_wrap2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:38:34 by mgayduk           #+#    #+#             */
/*   Updated: 2018/03/05 14:45:36 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_tools.h"

void	ra(t_list **a)
{
	write(1, "ra\n", 3);
	ps_rotate(a);
}

void	rb(t_list **b)
{
	write(1, "rb\n", 3);
	ps_rotate(b);
}

void	rr(t_list **a, t_list **b)
{
	write(1, "rr\n", 3);
	ps_rotate(a);
	ps_rotate(b);
}
