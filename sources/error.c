/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 15:01:29 by mgayduk           #+#    #+#             */
/*   Updated: 2018/02/15 15:01:30 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_type(char **arr)
{
	while (*arr)
	{
		if (!ft_is_number(*arr))
			error();
		arr++;
	}
}

void	check_values(t_list *head)
{
	while (head)
	{
		if (*((intmax_t *)head->content) > INT_MAX ||
			*((intmax_t *)head->content) < INT_MIN)
			error();
		head = head->next;
	}	
}

void del(void *content, size_t content_size)
{
	ft_bzero(content, content_size);
	free(content);
}

int		cmp(void *cont1, void *cont2)
{
	if (*((int *)cont1) < *((int *)cont2))
		return (-1);
	else if (*((int *)cont1) == *((int *)cont2))
		return (0);
	else
		return (1);
}

void	check_duplicates(t_list *head)
{
	t_btree *root;

	if (head)
	{
		root = ft_btreenew(head->content, head->content_size);
		head = head->next;
	}
	while (head)
	{
		if (!ft_btree_find(root, head->content, &cmp))
			ft_btree_insert(root, head->content, head->content_size, &cmp);
		else
			error();
		head = head->next;
	}
	ft_btree_erase(&root, &del);
}