/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 13:40:18 by mgayduk           #+#    #+#             */
/*   Updated: 2018/02/23 13:40:19 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_ERROR_H
# define INPUT_ERROR_H

# include "libft.h"
# include <limits.h>

void	memory_error(void);
void	check_type(char **arr);
void	check_values(t_list *head);
void	check_duplicates(t_list *head);

#endif
