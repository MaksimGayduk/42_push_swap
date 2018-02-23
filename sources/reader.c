/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:54:15 by mgayduk           #+#    #+#             */
/*   Updated: 2018/02/23 14:38:26 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *write_to_list(char **arr)
{
    t_list      *head;
    t_list      *tail;
    intmax_t    temp;

    temp = ft_atoi(*arr++);
    head = ft_lstnew(&temp, sizeof(intmax_t));
    if (!head)
        memory_error();
    tail = head;
    while (*arr)
    {
        temp = ft_atoi(*arr++);
        tail = ft_lstadd_back(tail, ft_lstnew(&temp, sizeof(intmax_t)));
    }
    return (head);
}

t_list *read_array(char *str)
{
    char    **arr;
    t_list  *head;

    arr = ft_strsplit(str, ' ');
    if (!*arr)
        error();
    check_type(arr);
    head = write_to_list(arr);
    check_values(head);
    check_duplicates(head);
    ft_clear_strarr(&arr);
    return (head);
}