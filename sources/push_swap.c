/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:36:16 by mgayduk           #+#    #+#             */
/*   Updated: 2018/02/15 14:36:17 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    ft_printf("argc = %i; argv[0] = %s\n", argc, argv[0]);
    t_list *stack_a;

    stack_a = read_array(argv[1]);
    return (0);
}