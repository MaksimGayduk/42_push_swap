/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:36:16 by mgayduk           #+#    #+#             */
/*   Updated: 2018/02/23 18:56:08 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_list *a;

    a = NULL;
    if (argc != 2)
        return(write(2, "Usage: ./push_swap [array]\n", 27));
    a = read_array(argv[1]);
    sort_stack(a);
    //print_stacks(a, b);

    ft_lst_erase(a);
    return (0);
}