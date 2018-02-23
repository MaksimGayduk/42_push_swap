/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tools.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 13:46:11 by mgayduk           #+#    #+#             */
/*   Updated: 2018/02/23 16:41:19 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ps means push_swap
*/

#ifndef PS_TOOLS_H
# define PS_TOOLS_H

#include "libft.h"

void    ps_push(t_list **from, t_list **to);
void    ps_swap(t_list *head);
void    ps_rotate(t_list **head);
void    ps_rev_rotate(t_list **head);

#endif